// Copyright Thispring Studio

#pragma once

/* 
* NOTE(26-08-30):
* 고정 폭 정수 타입들을 재정의합니다.
* 아키텍쳐에 맞게 분기처리 해야 합니다. (macOS, LP64 환경에서 작성됨) 
*/

typedef unsigned char       uint8;

typedef unsigned short      uint16;

typedef unsigned int        uint32;

typedef unsigned long long  uint64;


typedef signed char         int8;

typedef signed short        int16;

typedef signed int          int32;

typedef signed long long    int64;