#ifndef _GLOBAL_H
#define _GLOBAL_H

#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0501
#endif

#ifdef __cplusplus
extern "C"
{
#endif

#include <ntifs.h>
#include <ntddstor.h>
#include <mountdev.h>
#include <ntddvol.h>
#include <ntstrsafe.h>
#include <ntimage.h>
#include <intrin.h>

    extern PSHORT NtBuildNumber;

#ifdef __cplusplus
}
#endif


#ifdef DBG
#define DPRINT(format, ...) DbgPrintEx(DPFLTR_IHVDRIVER_ID, DPFLTR_ERROR_LEVEL, format, __VA_ARGS__)
#else
#define DPRINT(...)
#endif

void* RtlAllocateMemory(bool InZeroMemory, SIZE_T InSize);
void RtlFreeMemory(void* InPointer);
NTSTATUS RtlSuperCopyMemory(IN VOID UNALIGNED* Destination, IN CONST VOID UNALIGNED* Source, IN ULONG Length);

#endif