#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <errno.h>

#define ELF_MAGIC_SIZE 4

typedef struct {
	uint8_t  e_ident[16];
	uint16_t e_type;
	uint16_t e_machine;
	uint32_t e_version;
	uint64_t e_entry;
	uint64_t e_phoff;
	uint64_t e_shoff;
	uint32_t e_flags;
	uint16_t e_ehsize;
	uint16_t e_phentsize;
	uint16_t e_phnum;
	uint16_t e_shentsize;
	uint16_t e_shnum;
	uint16_t e_shstrndx;
} Elf64_Ehdr;

void print_error(const char *msg)
{
	fprintf(stderr, "%s\n", msg), exit(98);
}
void print_elf_header_info(const char *filename)
{
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		perror("Error opening file"), exit(98);
	}
	Elf64_Ehdr header;
	ssize_t num_read = read(fd, &header, sizeof(header));

	if (num_read != sizeof(header))
	{
		perror("Error reading ELF header");
		close(fd);
		exit(98);
	}
	if (memcmp(header.e_ident, "\x7F\x45\x4C\x46", ELF_MAGIC_SIZE) != 0)
	{
		print_error("Not an ELF file");
	}
	printf("Magic:   ");
	for (int i = 0; i < ELF_MAGIC_SIZE; ++i)
	{
		printf("%02x ", header.e_ident[i]);
	}
	printf("\nClass:   %d-bit\n", header.e_ident[4] == 1 ? 32 : 64);
	printf("Data:    %s\n", 
			header.e_ident[5] == 1 ? "Little Endian" : "Big Endian");
	printf("Version: %d\n", header.e_ident[6]);
	printf("OS/ABI:  %d\n", header.e_ident[7]);
	printf("ABI Version: %d\n", header.e_ident[8]);
	printf("Type:    %d\n", header.e_type);
	printf("Entry point address: 0x%lx\n", (unsigned long)header.e_entry);

	close(fd);
}
