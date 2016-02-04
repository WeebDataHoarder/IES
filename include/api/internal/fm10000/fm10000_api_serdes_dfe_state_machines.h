/* vim:ts=4:sw=4:expandtab
 * (No tabs, indent level is 4 spaces) */
/*****************************************************************************
 * File:            fm10000_api_serdes_state_machines.h
 * Creation Date:   October 30, 2013
 * Description:     Header file for the serdes-level state machine
 * 
 *                  ------------------------------------------------------
 *                  THIS FILE IS AUTO-GENERATED BY THE BUILD SYSTEM, DO
 *                  NOT MODIFY THIS FILE.  MODIFY THE FOLLOWING INSTEAD
 *                  ------------------------------------------------------
 * 
 *                  1) fm10000_api_serdes_state_machine.xml
 *                  2) templates/fm10000_api_serdes_state_machine.h
 *
 * Copyright (c) 2007 - 2015, Intel Corporation
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

#ifndef __FM_FM10000_API_SERDES_DFE_STATE_MACHINES_H
#define __FM_FM10000_API_SERDES_DFE_STATE_MACHINES_H

/* declaration of the SerDesDfe-level state machine types */
#define FM10000_BASIC_SERDES_DFE_STATE_MACHINE 300


/* declaration of SerDesDfe-level states */
typedef enum
{
    FM10000_SERDES_DFE_STATE_START = 0,
    FM10000_SERDES_DFE_STATE_WAIT_ICAL,
    FM10000_SERDES_DFE_STATE_WAIT_PCAL,
    FM10000_SERDES_DFE_STATE_DEBOUNCE,
    FM10000_SERDES_DFE_STATE_STOP_TUNING,
    FM10000_SERDES_DFE_STATE_EYE_H_DELAY,
    FM10000_SERDES_DFE_STATE_EYE_W_DELAY,
    FM10000_SERDES_DFE_STATE_MAX

} fm10000_serdesDfeSmStates;

extern fm_text fm10000SerDesDfeStatesMap[FM10000_SERDES_DFE_STATE_MAX];


/* declaration of SerDesDfe-level events */
typedef enum
{
    FM10000_SERDES_DFE_EVENT_START_TUNING_REQ = 0,
    FM10000_SERDES_DFE_EVENT_STOP_TUNING_REQ,
    FM10000_SERDES_DFE_EVENT_PAUSE_TUNING_REQ,
    FM10000_SERDES_DFE_EVENT_RESUME_TUNING_REQ,
    FM10000_SERDES_DFE_EVENT_START_PCAL_REQ,
    FM10000_SERDES_DFE_EVENT_TUNING_STOPPED_IND,
    FM10000_SERDES_DFE_EVENT_TIMEOUT_IND,
    FM10000_SERDES_DFE_EVENT_RESET_MACHINE_REQ,
    FM10000_SERDES_DFE_EVENT_MAX

} fm10000_serdesDfeSmEvents;

extern fm_text fm10000SerDesDfeEventsMap[FM10000_SERDES_DFE_EVENT_MAX];

/* declaration of external counterparts of action callbacks */
fm_status fm10000SerDesDfeFlagError( fm_smEventInfo *eventInfo, void *userInfo );
fm_status fm10000SerDesDfeConfigDfe( fm_smEventInfo *eventInfo, void *userInfo );
fm_status fm10000SerDesDfeStartTuning( fm_smEventInfo *eventInfo, void *userInfo );
fm_status fm10000SerDesDfePauseTuning( fm_smEventInfo *eventInfo, void *userInfo );
fm_status fm10000SerDesDfeResumeTuning( fm_smEventInfo *eventInfo, void *userInfo );
fm_status fm10000SerDesDfeStartKrPCalTuning( fm_smEventInfo *eventInfo, void *userInfo );
fm_status fm10000SerDesDfeStartTimeoutTimerShrt( fm_smEventInfo *eventInfo, void *userInfo );
fm_status fm10000SerDesDfeStartTimeoutTimerStopTuning( fm_smEventInfo *eventInfo, void *userInfo );
fm_status fm10000SerDesDfeStartTimeoutTimerDebounce( fm_smEventInfo *eventInfo, void *userInfo );
fm_status fm10000SerDesDfeStartTimeoutTimerAdaptive( fm_smEventInfo *eventInfo, void *userInfo );
fm_status fm10000SerDesDfeStopTimeoutTimer( fm_smEventInfo *eventInfo, void *userInfo );
fm_status fm10000SerDesDfeLoadRetryCntr( fm_smEventInfo *eventInfo, void *userInfo );
fm_status fm10000SerDesDfeClrCycleCntr( fm_smEventInfo *eventInfo, void *userInfo );
fm_status fm10000SerDesDfeClrRetryCntr( fm_smEventInfo *eventInfo, void *userInfo );
fm_status fm10000SerDesDfeIncCycleCntr( fm_smEventInfo *eventInfo, void *userInfo );
fm_status fm10000SerDesDfeStopTuning( fm_smEventInfo *eventInfo, void *userInfo );
fm_status fm10000SerDesDfeSendTuningStartedInd( fm_smEventInfo *eventInfo, void *userInfo );
fm_status fm10000SerDesDfeSendTuningStoppedInd( fm_smEventInfo *eventInfo, void *userInfo );
fm_status fm10000SerDesDfeSendTuningCompleteInd( fm_smEventInfo *eventInfo, void *userInfo );
fm_status fm10000SerDesDfeSendICalTuningCompleteInd( fm_smEventInfo *eventInfo, void *userInfo );
fm_status fm10000SerDesDfeReadEyeW( fm_smEventInfo *eventInfo, void *userInfo );
fm_status fm10000SerDesDfeReadEyeH( fm_smEventInfo *eventInfo, void *userInfo );
fm_status fm10000SerDesDfeConfigureEyeW( fm_smEventInfo *eventInfo, void *userInfo );
fm_status fm10000SerDesDfeConfigureEyeH( fm_smEventInfo *eventInfo, void *userInfo );
fm_status fm10000SerDesDfeDontSaveRecord( fm_smEventInfo *eventInfo, void *userInfo );
fm_status fm10000SerDesDfeRestartStopTuningTimer( fm_smEventInfo *eventInfo, void *userInfo );



/* declaration of external counterparts of condition callbacks */
fm_status fm10000SerDesDfeProcessPCalTimeout( fm_smEventInfo *eventInfo, void *userInfo, fm_int *nextState );
fm_status fm10000SerDesDfeProcessPushAutoStartTuning( fm_smEventInfo *eventInfo, void *userInfo, fm_int *nextState );
fm_status fm10000SerDesDfeProcessICalTimeout( fm_smEventInfo *eventInfo, void *userInfo, fm_int *nextState );



/* declaration of the log callback functions, if any */
fm_status fm10000LogSerDesDfeTransition( fm_smTransitionRecord *record );

/* declaration of registration functions for SerDesDfe-level state machine types */
fm_status fm10000RegisterBasicSerDesDfeStateMachine( void );

#endif /* __FM_FM10000_API_SERDES_DFE_STATE_MACHINES_H */
