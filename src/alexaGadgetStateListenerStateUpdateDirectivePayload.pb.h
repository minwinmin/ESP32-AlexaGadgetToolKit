/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9.6 at Wed Jul 15 00:57:10 2020. */

#ifndef PB_ALEXAGADGETSTATELISTENER_ALEXAGADGETSTATELISTENERSTATEUPDATEDIRECTIVEPAYLOAD_PB_H_INCLUDED
#define PB_ALEXAGADGETSTATELISTENER_ALEXAGADGETSTATELISTENERSTATEUPDATEDIRECTIVEPAYLOAD_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions */
typedef struct _alexaGadgetStateListener_StateUpdateDirectivePayloadProto_States {
    char name[32];
    char value[32];
/* @@protoc_insertion_point(struct:alexaGadgetStateListener_StateUpdateDirectivePayloadProto_States) */
} alexaGadgetStateListener_StateUpdateDirectivePayloadProto_States;

typedef struct _alexaGadgetStateListener_StateUpdateDirectivePayloadProto {
    pb_size_t states_count;
    alexaGadgetStateListener_StateUpdateDirectivePayloadProto_States states[5];
/* @@protoc_insertion_point(struct:alexaGadgetStateListener_StateUpdateDirectivePayloadProto) */
} alexaGadgetStateListener_StateUpdateDirectivePayloadProto;

/* Default values for struct fields */

/* Initializer values for message structs */
#define alexaGadgetStateListener_StateUpdateDirectivePayloadProto_init_default {0, {alexaGadgetStateListener_StateUpdateDirectivePayloadProto_States_init_default, alexaGadgetStateListener_StateUpdateDirectivePayloadProto_States_init_default, alexaGadgetStateListener_StateUpdateDirectivePayloadProto_States_init_default, alexaGadgetStateListener_StateUpdateDirectivePayloadProto_States_init_default, alexaGadgetStateListener_StateUpdateDirectivePayloadProto_States_init_default}}
#define alexaGadgetStateListener_StateUpdateDirectivePayloadProto_States_init_default {"", ""}
#define alexaGadgetStateListener_StateUpdateDirectivePayloadProto_init_zero {0, {alexaGadgetStateListener_StateUpdateDirectivePayloadProto_States_init_zero, alexaGadgetStateListener_StateUpdateDirectivePayloadProto_States_init_zero, alexaGadgetStateListener_StateUpdateDirectivePayloadProto_States_init_zero, alexaGadgetStateListener_StateUpdateDirectivePayloadProto_States_init_zero, alexaGadgetStateListener_StateUpdateDirectivePayloadProto_States_init_zero}}
#define alexaGadgetStateListener_StateUpdateDirectivePayloadProto_States_init_zero {"", ""}

/* Field tags (for use in manual encoding/decoding) */
#define alexaGadgetStateListener_StateUpdateDirectivePayloadProto_States_name_tag 1
#define alexaGadgetStateListener_StateUpdateDirectivePayloadProto_States_value_tag 2
#define alexaGadgetStateListener_StateUpdateDirectivePayloadProto_states_tag 1

/* Struct field encoding specification for nanopb */
extern const pb_field_t alexaGadgetStateListener_StateUpdateDirectivePayloadProto_fields[2];
extern const pb_field_t alexaGadgetStateListener_StateUpdateDirectivePayloadProto_States_fields[3];

/* Maximum encoded size of messages (where known) */
#define alexaGadgetStateListener_StateUpdateDirectivePayloadProto_size 350
#define alexaGadgetStateListener_StateUpdateDirectivePayloadProto_States_size 68

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define ALEXAGADGETSTATELISTENERSTATEUPDATEDIRECTIVEPAYLOAD_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif