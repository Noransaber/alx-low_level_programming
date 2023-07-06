Project Title: Hash Tables
This project aims to implement a hash table data structure and related operations in C. Hash tables are widely used in computer science due to their efficient lookup, insertion, and deletion operations. The project includes the following tasks:

Data Structures
The project uses the following data structures:

struct hash_node_s
A node of a hash table containing the following fields:

key: The unique key stored as a string.
value: The corresponding value associated with the key.
next: A pointer to the next node in case of collision.
struct hash_table_s
The hash table data structure with the following fields:

size: The size of the array.
array: An array of size size. Each element of this array is a pointer to the first node of a linked list.
Tests
It is strongly recommended to work together on a set of tests to ensure the correctness and functionality of the implementation.

Task 0: hash_table_create
Implement a function hash_table_create that creates a hash table.

c
Copy code
hash_table_t *hash_table_create(unsigned long int size);
Save to grepper
size: The size of the array.
Returns a pointer to the newly created hash table.
If something went wrong during the creation, the function should return NULL.
Task 1: hash_djb2
Implement a hash function hash_djb2 using the djb2 algorithm.

c
Copy code
unsigned long int hash_djb2(const unsigned char *str);
Save to grepper
str: The input string to be hashed.
Returns the hash value as an unsigned long integer.
Task 2: key_index
Implement a function key_index that gives the index of a key in the hash table.

c
Copy code
unsigned long int key_index(const unsigned char *key, unsigned long int size);
Save to grepper
key: The key to find the index for.
size: The size of the array in the hash table.
Returns the index at which the key/value pair should be stored in the array of the hash table.
Task 3: hash_table_set
Implement a function hash_table_set that adds an element to the hash table.

c
Copy code
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
Save to grepper
ht: The hash table to add or update the key/value pair.
key: The key to add or update. It cannot be an empty string.
value: The value associated with the key. It must be duplicated. It can be an empty string.
Returns 1 if the operation succeeded, 0 otherwise.
In case of a collision, the new node should be added at the beginning of the linked list.
Please refer to the individual task files in the repository for the corresponding code implementation.

Dependencies
The project does not have any external dependencies.

Testing
To test the implementation, compile the code files along with the test files provided in the repository. Execute the compiled program to observe the output of the implemented functions.

Note: The provided main functions in the test files are for demonstration purposes only and may not cover all possible edge cases. It is recommended to create additional test cases to ensure the correctness of the implementation.

Repository
The project files can be found in the following repository:

GitHub Repository: alx-low_level_programming

Directory: 0x1A-hash_tables

Files:

0-hash_table_create.c
1-djb2.c
2-key_index.c
3-hash_table_set.c
Please refer to theindividual files for the code implementation and further details.
