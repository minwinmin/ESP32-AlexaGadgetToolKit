/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9.6 at Wed Jul 15 00:57:08 2020. */

#ifndef PB_ALEXAGADGETSPEECHDATA_ALEXAGADGETSPEECHDATASPEECHMARKSDIRECTIVE_PB_H_INCLUDED
#define PB_ALEXAGADGETSPEECHDATA_ALEXAGADGETSPEECHDATASPEECHMARKSDIRECTIVE_PB_H_INCLUDED
#include <pb.h>

#include "directiveHeader.pb.h"

#include "alexaGadgetSpeechDataSpeechmarksDirectivePayload.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions */
typedef struct _alexaGadgetSpeechData_SpeechmarksDirectiveProto_Directive {
    header_DirectiveHeaderProto header;
    alexaGadgetSpeechData_SpeechmarksDirectivePayloadProto payload;
/* @@protoc_insertion_point(struct:alexaGadgetSpeechData_SpeechmarksDirectiveProto_Directive) */
} alexaGadgetSpeechData_SpeechmarksDirectiveProto_Directive;

typedef struct _alexaGadgetSpeechData_SpeechmarksDirectiveProto {
    alexaGadgetSpeechData_SpeechmarksDirectiveProto_Directive directive;
/* @@protoc_insertion_point(struct:alexaGadgetSpeechData_SpeechmarksDirectiveProto) */
} alexaGadgetSpeechData_SpeechmarksDirectiveProto;

/* Default values for struct fields */

/* Initializer values for message structs */
#define alexaGadgetSpeechData_SpeechmarksDirectiveProto_init_default {alexaGadgetSpeechData_SpeechmarksDirectiveProto_Directive_init_default}
#define alexaGadgetSpeechData_SpeechmarksDirectiveProto_Directive_init_default {header_DirectiveHeaderProto_init_default, alexaGadgetSpeechData_SpeechmarksDirectivePayloadProto_init_default}
#define alexaGadgetSpeechData_SpeechmarksDirectiveProto_init_zero {alexaGadgetSpeechData_SpeechmarksDirectiveProto_Directive_init_zero}
#define alexaGadgetSpeechData_SpeechmarksDirectiveProto_Directive_init_zero {header_DirectiveHeaderProto_init_zero, alexaGadgetSpeechData_SpeechmarksDirectivePayloadProto_init_zero}

/* Field tags (for use in manual encoding/decoding) */
#define alexaGadgetSpeechData_SpeechmarksDirectiveProto_Directive_payload_tag 2
#define alexaGadgetSpeechData_SpeechmarksDirectiveProto_Directive_header_tag 1
#define alexaGadgetSpeechData_SpeechmarksDirectiveProto_directive_tag 1

/* Struct field encoding specification for nanopb */
extern const pb_field_t alexaGadgetSpeechData_SpeechmarksDirectiveProto_fields[2];
extern const pb_field_t alexaGadgetSpeechData_SpeechmarksDirectiveProto_Directive_fields[3];

/* Maximum encoded size of messages (where known) */
#define alexaGadgetSpeechData_SpeechmarksDirectiveProto_size (63 + header_DirectiveHeaderProto_size)
#define alexaGadgetSpeechData_SpeechmarksDirectiveProto_Directive_size (57 + header_DirectiveHeaderProto_size)

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define ALEXAGADGETSPEECHDATASPEECHMARKSDIRECTIVE_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
