#ifndef SORTING_H_INCLUDED
#define SORTING_H_INCLUDED

#include <string.h>
#include <stdlib.h>
#include "list.h"
#include "buses_management.h"
#include "depots_management.h"
#include "messages.h"

/* buses sorting */
int buses_side_no_cmp(const void*, const void*);
int side_no_cmp(const void*, const void*);
int buses_line_no_cmp(const void*, const void*);
int line_no_cmp(const void*, const void*);
int buses_drivers_names_cmp(const void*, const void*);
int drivers_names_cmp(const void*, const void*);
int buses_drivers_pesels_cmp(const void*, const void*);
int drivers_pesels_cmp(const void*, const void*);

void *get_side_no(ListNode*);
void *get_line_no(ListNode*);
void *get_driver_name(ListNode*);
void *get_driver_pesel(ListNode*);

/* depots sorting */
int depots_names_cmp(const void*, const void*);
int names_cmp(const void*, const void*);

void *get_depot_name(ListNode*);


int integers_cmp(int, int);
int strings_cmp(char*, char*);

#endif /* SORTING_H_INCLUDED */
