// NativeCode.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include <math.h>

extern "C" __declspec(dllexport) long square(long value)
{
    return value * value;
}

extern "C" 
{
    struct Rec
    {
        int width;
        int height;
    };

    // By reference
    __declspec(dllexport) bool rIsSquare(Rec *rec)
    {
        return rec->width == rec->height;
    }

    // By value
    __declspec(dllexport) bool vIsSquare(Rec rec)
    {
        return rec.width == rec.height;
    }
}


