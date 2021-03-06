#ifndef MESSAGES_H_INCLUDED
#define MESSAGES_H_INCLUDED

#include <stdio.h>

enum Message {
    MALLOC_ERR,
    ALREADY_EXIST,
    NOT_FOUND,
    DEPOT_REMOVE_FAILED,
    BUS_REMOVE_FAILED,
    SAVING_FAILED,
    OPENING_FILE_FAILED,
    FILE_DAMAGED,
    LOAD_SUCCESSFUL
};

void msg(enum Message);

#endif /* MESSAGES_H_INCLUDED */
