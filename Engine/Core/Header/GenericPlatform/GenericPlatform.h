// Copyright Thispring Studio

// clang-format off
#pragma once

/*
 * NOTE(26-08-30):
 * 고정 폭 정수 타입들을 재정의합니다.
 * 아키텍쳐에 맞게 분기처리 해야 합니다. (macOS, LP64 환경에서 작성됨)
 */

// unsigned base types
typedef unsigned char       uint8;

typedef unsigned short      uint16;

typedef unsigned int        uint32;

typedef unsigned long long  uint64;

// signed base types
typedef signed char         int8;

typedef signed short        int16;

typedef signed int          int32;

typedef signed long long    int64;

// Character types

// An ANSI character. 8-bit fixed-width representation of 7-bit characters.
typedef char                ANSICHAR;

// A wide character. In-memory only. ?-bit fixed-width representation of the platform's natural wide character set. Could be different sizes on different platforms.
// typedef wchar_t				WIDECHAR;