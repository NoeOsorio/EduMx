/*
 * Copyright 2018 Google
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.8 at Mon Feb 12 11:03:06 2018. */

#include "any.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t google_protobuf_Any_fields[3] = {
    PB_FIELD(  1, STRING  , SINGULAR, CALLBACK, FIRST, google_protobuf_Any, type_url, type_url, 0),
    PB_FIELD(  2, BYTES   , SINGULAR, CALLBACK, OTHER, google_protobuf_Any, value, type_url, 0),
    PB_LAST_FIELD
};


/* @@protoc_insertion_point(eof) */
