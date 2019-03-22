#pragma once

#include <SupportDefs.h> // for int32

extern const char *K_FIELD_CLIP_NAME; // "be:clip_name";
extern const char *K_FIELD_ACTIONS; // "be:actions";
extern const char *K_FIELD_ORIGINATOR; // "be:originator";
extern const char *K_FIELD_TYPES; // "be:types";
extern const char *K_FIELD_FILETYPES; // "be:filetypes";
extern const char *K_FIELD_TYPE_DESCS; // "be:type_descriptions";

const char *getActionString(int32 action); // B_COPY_TARGET -> "B_COPY_TARGET" etc