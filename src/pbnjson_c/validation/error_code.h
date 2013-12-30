// @@@LICENSE
//
//      Copyright (c) 2009-2013 LG Electronics, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// LICENSE@@@

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Validation error codes */
typedef enum _ValidationErrorCode
{
	VEC_OK = 0,
	VEC_SYNTAX,
	VEC_NOT_NULL,
	VEC_NOT_ARRAY,
	VEC_ARRAY_HAS_DUPLICATES,
	VEC_ARRAY_TOO_LONG,
	VEC_ARRAY_TOO_SHORT,
	VEC_NOT_BOOLEAN,
	VEC_NOT_NUMBER,
	VEC_NOT_INTEGER_NUMBER,
	VEC_NUMBER_TOO_SMALL,
	VEC_NUMBER_TOO_BIG,
	VEC_NOT_STRING,
	VEC_STRING_TOO_SHORT,
	VEC_STRING_TOO_LONG,
	VEC_NOT_OBJECT,
	VEC_NOT_ENOUGH_KEYS,
	VEC_MISSING_REQUIRED_KEY,
	VEC_TOO_MANY_KEYS,
	VEC_OBJECT_PROPERTY_NOT_ALLOWED,
	VEC_TYPE_NOT_ALLOWED,
	VEC_MORE_THAN_ONE_OF,
	VEC_NEITHER_OF_ANY,
	VEC_NOT_EVERY_ALL_OF,
	VEC_UNEXPECTED_VALUE,
} ValidationErrorCode;

/** @brief Schema error codes */
typedef enum _SchemaErrorCode
{
	SEC_OK = 0,
	SEC_SYNTAX,
	SEC_TYPE_FORMAT,
	SEC_TYPE_VALUE,
	SEC_TYPE_ARRAY_EMPTY,
	SEC_TYPE_ARRAY_DUPLICATES,
	SEC_MAXIMUM_FORMAT,
	SEC_MINIMUM_FORMAT,
	SEC_EXCLUSIVE_MAXIMUM_FORMAT,
	SEC_EXCLUSIVE_MINIMUM_FORMAT,
	SEC_EXCLUSIVE_MAXIMUM_WITHOUT_MAXIMUM,
	SEC_EXCLUSIVE_MINIMUM_WITHOUT_MINIMUM,
	SEC_MAX_LENGTH_FORMAT,
	SEC_MIN_LENGTH_FORMAT,
	SEC_MAX_LENGTH_VALUE_FORMAT,
	SEC_MIN_LENGTH_VALUE_FORMAT,
	SEC_ITEMS_FORMAT,
	SEC_ITEMS_ARRAY_FORMAT,
	SEC_ADDITIONAL_ITEMS_FORMAT,
	SEC_MAX_ITEMS_FORMAT,
	SEC_MIN_ITEMS_FORMAT,
	SEC_MAX_ITEMS_VALUE_FORMAT,
	SEC_MIN_ITEMS_VALUE_FORMAT,
	SEC_UNIQUE_FORMAT,
	SEC_PROPERTIES_FORMAT,
	SEC_PROPERTIES_OBJECT_FORMAT,
	SEC_ADDITIONAL_PROPERTIES_FORMAT,
	SEC_MAX_PROPERTIES_FORMAT,
	SEC_MIN_PROPERTIES_FORMAT,
	SEC_MAX_PROPERTIES_VALUE_FORMAT,
	SEC_MIN_PROPERTIES_VALUE_FORMAT,
	SEC_REQUIRED_FORMAT,
	SEC_REQUIRED_ARRAY_FORMAT,
	SEC_ENUM_FORMAT,
	SEC_ENUM_ARRAY_EMPTY,
	SEC_ENUM_ARRAY_DUPLICATES,
	SEC_COMBINATOR_ARRAY_FORMAT,
	SEC_ALL_OF_FORMAT,
	SEC_ALL_OF_ARRAY_EMPTY,
	SEC_ANY_OF_FORMAT,
	SEC_ANY_OF_ARRAY_EMPTY,
	SEC_ONE_OF_FORMAT,
	SEC_ONE_OF_ARRAY_EMPTY,
	SEC_DEFINITIONS_FORMAT,
	SEC_DEFINITIONS_OBJECT_FORMAT,
	SEC_DSCHEMA_FORMAT,
	SEC_TITLE_FORMAT,
	SEC_DESCRIPTION_FORMAT,
	SEC_NAME_FORMAT,
} SchemaErrorCode;

/** @brief Get human readable message for specific validation error code. */
char const *ValidationGetErrorMessage(int code);

/** @brief Get human readable message for specific schema error code. */
char const *SchemaGetErrorMessage(int code);

#ifdef __cplusplus
}
#endif
