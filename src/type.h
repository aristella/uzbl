/*
 * Uzbl Types
 */

#ifndef UZBL_TYPE_H
#define UZBL_TYPE_H

typedef enum {
    TYPE_INT = 1,
    TYPE_STR,
    TYPE_FLOAT,
    TYPE_ULL,
    TYPE_NAME,
    /* Used by send_event. */
    TYPE_FORMATTEDSTR,
    TYPE_STR_ARRAY
} UzblType;

#endif
