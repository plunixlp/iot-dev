/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.0-dev at Wed Apr  4 14:54:33 2018. */

#ifndef PB_DICE_ROLL_PB_H_INCLUDED
#define PB_DICE_ROLL_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions */
typedef struct _DiceRoll {
    pb_callback_t message;
    int32_t number;
/* @@protoc_insertion_point(struct:DiceRoll) */
} DiceRoll;

/* Default values for struct fields */

/* Initializer values for message structs */
#define DiceRoll_init_default                    {{{NULL}, NULL}, 0}
#define DiceRoll_init_zero                       {{{NULL}, NULL}, 0}

/* Field tags (for use in manual encoding/decoding) */
#define DiceRoll_message_tag                     1
#define DiceRoll_number_tag                      2

/* Struct field encoding specification for nanopb */
extern const pb_field_t DiceRoll_fields[3];

/* Maximum encoded size of messages (where known) */
/* DiceRoll_size depends on runtime parameters */

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define DICE_ROLL_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
