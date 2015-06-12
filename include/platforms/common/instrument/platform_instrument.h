/* vim:ts=4:sw=4:expandtab
 * (No tabs, indent level is 4 spaces)  */
/*****************************************************************************
 * File:            platform_instrument.h
 * Creation Date:   July 3, 2012
 * Description:     Platform Instrumentation header functions
 *
 * Copyright (c) 2006 - 2012, Intel Corporation
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *     * Redistributions of source code must retain the above copyright notice,
 *       this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of Intel Corporation nor the names of its contributors
 *       may be used to endorse or promote products derived from this software
 *       without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*****************************************************************************/

#ifndef __FM_PLATFORM_INSTRUMENT_H
#define __FM_PLATFORM_INSTRUMENT_H

/*****************************************************
 * INSTRUMENT_LOG_LEVEL is used to enable some
 * Intel-internal test instrumentation:
 *
 *  0   Normal setting (disable instrumentation)
 *  1   Enable binary instrumentation (normal instrumentation)
 *  2   Enable text instrumentation (for testing instrumentation)
 *
 *****************************************************/

#if INSTRUMENT_LOG_LEVEL
#define INSTRUMENT_REG_WRITE(sw, addr, val)  \
        fmPlatformInstrumentWriteCSR( (sw), (addr), (val) )
#else
#define INSTRUMENT_REG_WRITE(sw, addr, val)
#endif


/**************************************************
 * Functions.
 **************************************************/

void fmPlatformCloseInstrumentation(void);
void fmPlatformOpenInstrumentation(void);
void fmPlatformInstrumentWriteCSR(fm_int sw, fm_uint32 addr, fm_uint32 newValue);

#endif /* __FM_PLATFORM_INSTRUMENT_H */
