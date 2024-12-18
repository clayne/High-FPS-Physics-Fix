#pragma once

#include "config.h"

namespace WinApi
{
    SKMP_FORCEINLINE void MessageBoxError(const char* a_message)
    {
        MessageBoxA(NULL, a_message, PLUGIN_NAME_LONG, MB_OK | MB_ICONERROR | MB_SYSTEMMODAL);
    }
}