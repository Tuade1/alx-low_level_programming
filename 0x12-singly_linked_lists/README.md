when and why using linked lists vs arrays
How to build and use linked lists


0. Write a function that prints all the elements of a list_ t list.
Prototype:size-t print-list(const list_t *h);
Return: the number of nodes
Format: see example
If str is NULL, print [0] (nil)
You are allowed to use printf


1. Write a function that returns the number of elements in a linked list_t list.
Prototype: size_t list_len(const list_t *h);


2. Write a function that returns the number of elements in a linked list_ t list.
Prototype: size_t list_ len(const list_ t *h);

3. Write a function that adds a new node at the beginning of a list_t list.
Prototype: list_t *add _node(list_t **head, const char *str);
Return: the address of the new element, or NULL if it failed
str needs to be duplicated
You are allowed to use strdup


4. Write a function that adds a new node at the end of a list_t list.
Prototype: list_t *add_node_end(list_t **head, const char *str);
Return: the address of the new element, or NULL if it failed
str needs to be duplicated
You are allowed to use strdup


5. Write a function that frees a list_t list.
Prototype: void free_list(list_t *head);
