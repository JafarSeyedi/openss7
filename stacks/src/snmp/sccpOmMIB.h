/*****************************************************************************

 @(#) $Id: sccpOmMIB.h,v 0.9.2.4 2009-01-02 15:04:15 brian Exp $

 -----------------------------------------------------------------------------

 Copyright (c) 2008-2009  Monavacom Limited <http://www.monavacom.com/>
 Copyright (c) 2001-2008  OpenSS7 Corporation <http://www.openss7.com/>
 Copyright (c) 1997-2001  Brian F. G. Bidulock <bidulock@openss7.org>

 All Rights Reserved.

 This program is free software; you can redistribute it and/or modify it under
 the terms of the GNU Affero General Public License as published by the Free
 Software Foundation; version 3 of the License.

 This program is distributed in the hope that it will be useful, but WITHOUT
 ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 FOR A PARTICULAR PURPOSE.  See the GNU Affero General Public License for more
 details.

 You should have received a copy of the GNU Affero General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>, or
 write to the Free Software Foundation, Inc., 675 Mass Ave, Cambridge, MA
 02139, USA.

 -----------------------------------------------------------------------------

 U.S. GOVERNMENT RESTRICTED RIGHTS.  If you are licensing this Software on
 behalf of the U.S. Government ("Government"), the following provisions apply
 to you.  If the Software is supplied by the Department of Defense ("DoD"), it
 is classified as "Commercial Computer Software" under paragraph 252.227-7014
 of the DoD Supplement to the Federal Acquisition Regulations ("DFARS") (or any
 successor regulations) and the Government is acquiring only the license rights
 granted herein (the license rights customarily provided to non-Government
 users).  If the Software is supplied to any unit or agency of the Government
 other than DoD, it is classified as "Restricted Computer Software" and the
 Government's rights in the Software are defined in paragraph 52.227-19 of the
 Federal Acquisition Regulations ("FAR") (or any successor regulations) or, in
 the cases of NASA, in paragraph 18.52.227-86 of the NASA Supplement to the FAR
 (or any successor regulations).

 -----------------------------------------------------------------------------

 Commercial licensing and support of this software is available from OpenSS7
 Corporation at a fee.  See http://www.openss7.com/

 -----------------------------------------------------------------------------

 Last Modified $Date: 2009-01-02 15:04:15 $ by $Author: brian $

 -----------------------------------------------------------------------------

 $Log: sccpOmMIB.h,v $
 Revision 0.9.2.4  2009-01-02 15:04:15  brian
 - updated agents

 Revision 0.9.2.3  2008-12-31 16:04:47  brian
 - updated mibs

 Revision 0.9.2.2  2008-12-24 13:08:26  brian
 - building ss7confd

 *****************************************************************************/

#ifndef __LOCAL_SCCPOMMIB_H__
#define __LOCAL_SCCPOMMIB_H__

#ident "@(#) $RCSfile: sccpOmMIB.h,v $ $Name:  $($Revision: 0.9.2.4 $) Copyright (c) 2008-2009 Monavacom Limited."

/*
 * This file was generated by mib2c and is intended for use as a mib module
 * for the ucd-snmp snmpd agent.
 */
/* our storage structure(s) */
struct sccpOmMIB_data {
	uint sccpOmMIB_request;
	oid *sccpOm1stAndIntervalActivate;
	size_t sccpOm1stAndIntervalActivateLen;
	oid *sccpOm1stAndIntervalDeactivate;
	size_t sccpOm1stAndIntervalDeactivateLen;
	oid *sccpOm5MinActivate;
	size_t sccpOm5MinActivateLen;
	oid *sccpOm5MinDeaActivate;
	size_t sccpOm5MinDeaActivateLen;
	oid *sccpOm15MinActivate;
	size_t sccpOm15MinActivateLen;
	oid *sccpOm15MinDeaActivate;
	size_t sccpOm15MinDeaActivateLen;
	long sccpOmDiscontinuityTime;
	long sccpOmTimeStamp;
	ulong sccpOm5MinMaxIntervals;
	ulong sccpOm15MinMaxIntervals;
	long sccpOmpDefault;
	long sccpOmNrOfSubLevelsDefault;
	long sccpOmNrOfRestrictionLevelsDefault;
};
struct sccpOmErrorsTable_data {
	uint sccpOmErrorsTable_request;
	uint sccpOmErrorsTable_refs;
	ulong sccpNetworkEntityId;
	long sccpOmNoTranslatorForAddress;
	long sccpOmNoRuleForAddress;
	long sccpOmPointCodeNotAvailable;
	long sccpOmPointCodeCongested;
	long sccpOmSubsystemUnavailable;
	long sccpOmSubsystemCongested;
	long sccpOmUnequippedSubsystem;
	long sccpOmSyntaxErrorDetected;
	long sccpOmRoutingFailure;
	long sccpOmReassemblyTimeOut;
	long sccpOmSegmentOutOfOrder;
	long sccpOmNoReassemblySpace;
	long sccpOmHopCounterViolation;
	long sccpOmTooLargeForSegmentation;
	long sccpOmReleaseFailure;
	long sccpOmInactivityTimerExpiry;
	long sccpOmProviderInitiatedReset;
	long sccpOmProviderInitiatedRelease;
	long sccpOmNoSegmentationSupport;
	long sccpOmSegmentationFailure;
	long sccpOmReassemblyFailure;
	long sccpOmErrors5MinValidIntervals;
	long sccpOmErrors15MinValidIntervals;
};
struct sccpOmMessageTable_data {
	uint sccpOmMessageTable_request;
	uint sccpOmMessageTable_refs;
	ulong sccpNetworkEntityId;
	long sccpOmTotalMessagesHandled;
	long sccpOmTotalMessagesLocal;
	long sccpOmTotalMessagesGTT;
	long sccpOmUDTMessagesSent;
	long sccpOmUDTSMessagesSent;
	long sccpOmUDTMessagesReceived;
	long sccpOmUDTSMessagesReceived;
	long sccpOmCRMessagesSent;
	long sccpOmCREFMessagesSent;
	long sccpOmCRMessagesReceived;
	long sccpOmCREFMessagesReceived;
	long sccpOmRSRMessagesSent;
	long sccpOmRSRMessagesReceived;
	long sccpOmERRMessagesSent;
	long sccpOmERRMessagesReceived;
	long sccpOmXUDTMessagesSent;
	long sccpOmXUDTSMessagesSent;
	long sccpOmXUDTMessagesReceived;
	long sccpOmXUDTSMessagesReceived;
	long sccpOmLUDTMessagesSent;
	long sccpOmLUDTSMessagesSent;
	long sccpOmLUDTMessagesReceived;
	long sccpOmLUDTSMessagesReceived;
	long sccpOmMessage5MinValidIntervals;
	long sccpOmMessage15MinValidIntervals;
};
struct sccpOmAccessibilityTable_data {
	uint sccpOmAccessibilityTable_request;
	uint sccpOmAccessibilityTable_refs;
	ulong sccpNetworkEntityId;
	long sccpOmSSCMessageReceived;
	long sccpOmSSPMessageReceived;
	ulong sccpOmSccpUnavailableDuration;
	long sccpOmAccessibility5MinValidIntervals;
	long sccpOmAccessibility15MinValidIntervals;
};
struct sccpOmUtilizationTable_data {
	uint sccpOmUtilizationTable_request;
	uint sccpOmUtilizationTable_refs;
	ulong sccpNetworkEntityId;
	long sccpOmSsn;
	long sccpOmLXUDTMessagesOrigClass0;
	long sccpOmLXUDTMessagesOrigClass1;
	long sccpOmLXUDTMessagesTermClass0;
	long sccpOmLXUDTMessagesTermClass1;
	long sccpOmMessagesSentToBackup;
	long sccpOmDT1MessagesReceived;
	long sccpOmDT1MessagesSent;
	long sccpOmDT2MessagesReceived;
	long sccpOmDT2MessagesSent;
	long sccpOmEDMessagesSent;
	long sccpOmEDMessagesReceived;
	long sccpOmUtilization5MinValidIntervals;
	long sccpOmUtilization15MinValidIntervals;
};
struct sccpOm5MinHistoryTable_data {
	uint sccpOm5MinHistoryTable_request;
	uint sccpOm5MinHistoryTable_refs;
	ulong sccpNetworkEntityId;
	long sccpOmInterval;
	long sccpOm5MinNoTranslatorForAddress;
	long sccpOm5MinNoRuleForAddress;
	long sccpOm5MinPointCodeNotAvailable;
	long sccpOm5MinPointCodeCongested;
	long sccpOm5MinSubsystemUnavailable;
	long sccpOm5MinSubsystemCongested;
	long sccpOm5MinUnequippedSubsystem;
	long sccpOm5MinSyntaxErrorDetected;
	long sccpOm5MinRoutingFailure;
	long sccpOm5MinReassemblyTimeOut;
	long sccpOm5MinSegmentOutOfOrder;
	long sccpOm5MinNoReassemblySpace;
	long sccpOm5MinHopCounterViolation;
	long sccpOm5MinTooLargeForSegmentation;
	long sccpOm5MinReleaseFailure;
	long sccpOm5MinInactivityTimerExpiry;
	long sccpOm5MinProviderInitiatedReset;
	long sccpOm5MinProviderInitiatedRelease;
	long sccpOm5MinNoSegmentationSupport;
	long sccpOm5MinSegmentationFailure;
	long sccpOm5MinReassemblyFailure;
	long sccpOm5MinTotalMessagesHandled;
	long sccpOm5MinTotalMessagesLocal;
	long sccpOm5MinTotalMessagesGTT;
	long sccpOm5MinUDTMessagesSent;
	long sccpOm5MinUDTSMessagesSent;
	long sccpOm5MinUDTMessagesReceived;
	long sccpOm5MinUDTSMessagesReceived;
	long sccpOm5MinCRMessagesSent;
	long sccpOm5MinCREFMessagesSent;
	long sccpOm5MinCRMessagesReceived;
	long sccpOm5MinCREFMessagesReceived;
	long sccpOm5MinRSRMessagesSent;
	long sccpOm5MinRSRMessagesReceived;
	long sccpOm5MinERRMessagesSent;
	long sccpOm5MinERRMessagesReceived;
	long sccpOm5MinXUDTMessagesSent;
	long sccpOm5MinXUDTSMessagesSent;
	long sccpOm5MinXUDTMessagesReceived;
	long sccpOm5MinXUDTSMessagesReceived;
	long sccpOm5MinLUDTMessagesSent;
	long sccpOm5MinLUDTSMessagesSent;
	long sccpOm5MinLUDTMessagesReceived;
	long sccpOm5MinLUDTSMessagesReceived;
	long sccpOm5MinSSCMessageReceived;
	long sccpOm5MinSSPMessageReceived;
};
struct sccpOm15MinHistoryTable_data {
	uint sccpOm15MinHistoryTable_request;
	uint sccpOm15MinHistoryTable_refs;
	ulong sccpNetworkEntityId;
	long sccpOmInterval;
	long sccpOm15MinNoTranslatorForAddress;
	long sccpOm15MinNoRuleForAddress;
	long sccpOm15MinPointCodeNotAvailable;
	long sccpOm15MinPointCodeCongested;
	long sccpOm15MinSubsystemUnavailable;
	long sccpOm15MinSubsystemCongested;
	long sccpOm15MinUnequippedSubsystem;
	long sccpOm15MinSyntaxErrorDetected;
	long sccpOm15MinRoutingFailure;
	long sccpOm15MinReassemblyTimeOut;
	long sccpOm15MinSegmentOutOfOrder;
	long sccpOm15MinNoReassemblySpace;
	long sccpOm15MinHopCounterViolation;
	long sccpOm15MinTooLargeForSegmentation;
	long sccpOm15MinReleaseFailure;
	long sccpOm15MinInactivityTimerExpiry;
	long sccpOm15MinProviderInitiatedReset;
	long sccpOm15MinProviderInitiatedRelease;
	long sccpOm15MinNoSegmentationSupport;
	long sccpOm15MinSegmentationFailure;
	long sccpOm15MinReassemblyFailure;
	long sccpOm15MinTotalMessagesHandled;
	long sccpOm15MinTotalMessagesLocal;
	long sccpOm15MinTotalMessagesGTT;
	long sccpOm15MinUDTMessagesSent;
	long sccpOm15MinUDTSMessagesSent;
	long sccpOm15MinUDTMessagesReceived;
	long sccpOm15MinUDTSMessagesReceived;
	long sccpOm15MinCRMessagesSent;
	long sccpOm15MinCREFMessagesSent;
	long sccpOm15MinCRMessagesReceived;
	long sccpOm15MinCREFMessagesReceived;
	long sccpOm15MinRSRMessagesSent;
	long sccpOm15MinRSRMessagesReceived;
	long sccpOm15MinERRMessagesSent;
	long sccpOm15MinERRMessagesReceived;
	long sccpOm15MinXUDTMessagesSent;
	long sccpOm15MinXUDTSMessagesSent;
	long sccpOm15MinXUDTMessagesReceived;
	long sccpOm15MinXUDTSMessagesReceived;
	long sccpOm15MinLUDTMessagesSent;
	long sccpOm15MinLUDTSMessagesSent;
	long sccpOm15MinLUDTMessagesReceived;
	long sccpOm15MinLUDTSMessagesReceived;
	ulong sccpOm15MinSccpUnavailableDuration;
};
struct sccpOm5MinSsnHistoryTable_data {
	uint sccpOm5MinSsnHistoryTable_request;
	uint sccpOm5MinSsnHistoryTable_refs;
	ulong sccpNetworkEntityId;
	long sccpOmSsn;
	long sccpOmInterval;
	long sccpOm5MinLXUDTMessagesOrigClass0;
	long sccpOm5MinLXUDTMessagesOrigClass1;
	long sccpOm5MinLXUDTMessagesTermClass0;
	long sccpOm5MinLXUDTMessagesTermClass1;
	long sccpOm5MinMessagesSentToBackup;
	long sccpOm5MinDT1MessagesReceived;
	long sccpOm5MinDT1MessagesSent;
	long sccpOm5MinDT2MessagesReceived;
	long sccpOm5MinDT2MessagesSent;
	long sccpOm5MinEDMessagesSent;
	long sccpOm5MinEDMessagesReceived;
};
struct sccpOm15MinSsnHistoryTable_data {
	uint sccpOm15MinSsnHistoryTable_request;
	uint sccpOm15MinSsnHistoryTable_refs;
	ulong sccpNetworkEntityId;
	long sccpOmSsn;
	long sccpOmInterval;
	long sccpOm15MinLXUDTMessagesOrigClass0;
	long sccpOm15MinLXUDTMessagesOrigClass1;
	long sccpOm15MinLXUDTMessagesTermClass0;
	long sccpOm15MinLXUDTMessagesTermClass1;
	long sccpOm15MinMessagesSentToBackup;
	long sccpOm15MinDT1MessagesReceived;
	long sccpOm15MinDT1MessagesSent;
	long sccpOm15MinDT2MessagesReceived;
	long sccpOm15MinDT2MessagesSent;
	long sccpOm15MinEDMessagesSent;
	long sccpOm15MinEDMessagesReceived;
};

/* storage declarations */
extern struct sccpOmMIB_data *sccpOmMIBStorage;
extern struct header_complex_index *sccpOmErrorsTableStorage;
extern struct header_complex_index *sccpOmMessageTableStorage;
extern struct header_complex_index *sccpOmAccessibilityTableStorage;
extern struct header_complex_index *sccpOmUtilizationTableStorage;
extern struct header_complex_index *sccpOm5MinHistoryTableStorage;
extern struct header_complex_index *sccpOm15MinHistoryTableStorage;
extern struct header_complex_index *sccpOm5MinSsnHistoryTableStorage;
extern struct header_complex_index *sccpOm15MinSsnHistoryTableStorage;

/* enum definitions from the covered mib sections */

#define SCCPOMSYNTAXERRORTYPE_UNKNOWNMESSAGETYPE 0
#define SCCPOMSYNTAXERRORTYPE_INVALIDVALUEOFPROTOCOLCLASS 1
#define SCCPOMSYNTAXERRORTYPE_INVALIDVALUEOFGTI  2
#define SCCPOMSYNTAXERRORTYPE_INVALIDVALUEFORENCODINGSCHEME 3
#define SCCPOMSYNTAXERRORTYPE_INVALIDPARAMETERLENGTH 4
#define SCCPOMSYNTAXERRORTYPE_INVALIDPOINTERTOOPTIONALPARAMETER 5
#define SCCPOMSYNTAXERRORTYPE_OPTIONALPARAMETERTOLONG 6
#define SCCPOMSYNTAXERRORTYPE_POINTERINCONSISTENTWITHLENGTHS 7
#define SCCPOMSYNTAXERRORTYPE_INCOMPATIBLEADDRESSLENGTH 8
#define SCCPOMSYNTAXERRORTYPE_EXPECTEDSSNNOTFOUND 9

/* notifications */
extern oid sccpOm5minReport_oid[];
extern oid sccpOm15minReport_oid[];
extern oid sccpOm5minSsnReport_oid[];
extern oid sccpOm15minSsnReport_oid[];

/* scalars accessible only for notify */
extern oid sccpOmSsn_oid[];
extern oid sccpOmSsn_oid[];
extern oid sccpOmSsn_oid[];
extern oid sccpOmDuration_oid[];
extern oid sccpOmSsn_oid[];
extern oid sccpOmSyntaxErrorType_oid[];

/* object id definitions */
extern oid sccpOmMIBCompliance_oid[];
extern oid sccpOmObligatoryGroup_oid[];
extern oid sccpOmRoutingGroup_oid[];
extern oid sccpOmOblReassemblyGroup_oid[];
extern oid sccpOmAllReassemblyGroup_oid[];
extern oid sccpOmHopCounterGroup_oid[];
extern oid sccpOmReplicatedGroup_oid[];
extern oid sccpOmOblConnectionOrientedGroup_oid[];
extern oid sccpOmAllConnectionOrientedGroup_oid[];
extern oid sccpOmOblProtocolClass3Group_oid[];
extern oid sccpOmAllProtocolClass3Group_oid[];
extern oid sccpOmSccpManagementGroup_oid[];
extern oid sccpOmGTTGroup_oid[];
extern oid sccpOmNonObligatoryGroup_oid[];
extern oid sccpOmSccpUnavailableGroup_oid[];

/* function prototypes */
void init_sccpOmMIB(void);
void deinit_sccpOmMIB(void);
int term_sccpOmMIB(int majorID, int minorID, void *serverarg, void *clientarg);
FindVarMethod var_sccpOmMIB;
void parse_sccpOmMIB(const char *, char *);
SNMPCallback store_sccpOmMIB;
void refresh_sccpOmMIB(void);
FindVarMethod var_sccpOmErrorsTable;
struct sccpOmErrorsTable_data *sccpOmErrorsTable_create(void);
int sccpOmErrorsTable_destroy(struct sccpOmErrorsTable_data **);
int sccpOmErrorsTable_add(struct sccpOmErrorsTable_data *);
int sccpOmErrorsTable_del(struct sccpOmErrorsTable_data *);
void parse_sccpOmErrorsTable(const char *, char *);
SNMPCallback store_sccpOmErrorsTable;
void refresh_sccpOmErrorsTable(void);
FindVarMethod var_sccpOmMessageTable;
struct sccpOmMessageTable_data *sccpOmMessageTable_create(void);
int sccpOmMessageTable_destroy(struct sccpOmMessageTable_data **);
int sccpOmMessageTable_add(struct sccpOmMessageTable_data *);
int sccpOmMessageTable_del(struct sccpOmMessageTable_data *);
void parse_sccpOmMessageTable(const char *, char *);
SNMPCallback store_sccpOmMessageTable;
void refresh_sccpOmMessageTable(void);
FindVarMethod var_sccpOmAccessibilityTable;
struct sccpOmAccessibilityTable_data *sccpOmAccessibilityTable_create(void);
int sccpOmAccessibilityTable_destroy(struct sccpOmAccessibilityTable_data **);
int sccpOmAccessibilityTable_add(struct sccpOmAccessibilityTable_data *);
int sccpOmAccessibilityTable_del(struct sccpOmAccessibilityTable_data *);
void parse_sccpOmAccessibilityTable(const char *, char *);
SNMPCallback store_sccpOmAccessibilityTable;
void refresh_sccpOmAccessibilityTable(void);
FindVarMethod var_sccpOmUtilizationTable;
struct sccpOmUtilizationTable_data *sccpOmUtilizationTable_create(void);
int sccpOmUtilizationTable_destroy(struct sccpOmUtilizationTable_data **);
int sccpOmUtilizationTable_add(struct sccpOmUtilizationTable_data *);
int sccpOmUtilizationTable_del(struct sccpOmUtilizationTable_data *);
void parse_sccpOmUtilizationTable(const char *, char *);
SNMPCallback store_sccpOmUtilizationTable;
void refresh_sccpOmUtilizationTable(void);
FindVarMethod var_sccpOm5MinHistoryTable;
struct sccpOm5MinHistoryTable_data *sccpOm5MinHistoryTable_create(void);
int sccpOm5MinHistoryTable_destroy(struct sccpOm5MinHistoryTable_data **);
int sccpOm5MinHistoryTable_add(struct sccpOm5MinHistoryTable_data *);
int sccpOm5MinHistoryTable_del(struct sccpOm5MinHistoryTable_data *);
void parse_sccpOm5MinHistoryTable(const char *, char *);
SNMPCallback store_sccpOm5MinHistoryTable;
void refresh_sccpOm5MinHistoryTable(void);
FindVarMethod var_sccpOm15MinHistoryTable;
struct sccpOm15MinHistoryTable_data *sccpOm15MinHistoryTable_create(void);
int sccpOm15MinHistoryTable_destroy(struct sccpOm15MinHistoryTable_data **);
int sccpOm15MinHistoryTable_add(struct sccpOm15MinHistoryTable_data *);
int sccpOm15MinHistoryTable_del(struct sccpOm15MinHistoryTable_data *);
void parse_sccpOm15MinHistoryTable(const char *, char *);
SNMPCallback store_sccpOm15MinHistoryTable;
void refresh_sccpOm15MinHistoryTable(void);
FindVarMethod var_sccpOm5MinSsnHistoryTable;
struct sccpOm5MinSsnHistoryTable_data *sccpOm5MinSsnHistoryTable_create(void);
int sccpOm5MinSsnHistoryTable_destroy(struct sccpOm5MinSsnHistoryTable_data **);
int sccpOm5MinSsnHistoryTable_add(struct sccpOm5MinSsnHistoryTable_data *);
int sccpOm5MinSsnHistoryTable_del(struct sccpOm5MinSsnHistoryTable_data *);
void parse_sccpOm5MinSsnHistoryTable(const char *, char *);
SNMPCallback store_sccpOm5MinSsnHistoryTable;
void refresh_sccpOm5MinSsnHistoryTable(void);
FindVarMethod var_sccpOm15MinSsnHistoryTable;
struct sccpOm15MinSsnHistoryTable_data *sccpOm15MinSsnHistoryTable_create(void);
int sccpOm15MinSsnHistoryTable_destroy(struct sccpOm15MinSsnHistoryTable_data **);
int sccpOm15MinSsnHistoryTable_add(struct sccpOm15MinSsnHistoryTable_data *);
int sccpOm15MinSsnHistoryTable_del(struct sccpOm15MinSsnHistoryTable_data *);
void parse_sccpOm15MinSsnHistoryTable(const char *, char *);
SNMPCallback store_sccpOm15MinSsnHistoryTable;
void refresh_sccpOm15MinSsnHistoryTable(void);

WriteMethod write_sccpOm1stAndIntervalActivate;
WriteMethod write_sccpOm1stAndIntervalDeactivate;
WriteMethod write_sccpOm5MinActivate;
WriteMethod write_sccpOm5MinDeaActivate;
WriteMethod write_sccpOm15MinActivate;
WriteMethod write_sccpOm15MinDeaActivate;
WriteMethod write_sccpOm5MinMaxIntervals;
WriteMethod write_sccpOm15MinMaxIntervals;
WriteMethod write_sccpOmpDefault;
WriteMethod write_sccpOmNrOfSubLevelsDefault;
WriteMethod write_sccpOmNrOfRestrictionLevelsDefault;
#endif				/* __LOCAL_SCCPOMMIB_H__ */