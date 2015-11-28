#ifndef LIST_H
#define LIST_H

#include <stdlib.h>

/* node of the generic List */
typedef struct ListNode {
    void *object;
    struct ListNode *next;
    struct ListNode *prev;
} ListNode;

/* generic, universal, linked List */
typedef struct List {
    unsigned int length;
    ListNode *head;
    ListNode *tail;
} List;


/* takes a List and a pointer to object
 * returns 1 if successful
 * returns 0 if malloc was unsuccessful
 */
int append_to(List*, void*);

/* removes given ListNode
 * returns 1 if successful
 * returns 0 if list is empty
 */
int remove_from(List*, void*);

/* returns pointer to ListNode
 * which  "object" is the same as
 * passed element
 */
ListNode *find_in(List*, void*);

/* removes the all list */
void delete_list(List*);

#endif /* LIST_H */
