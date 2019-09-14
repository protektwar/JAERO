/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "fans-cpdlc.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_FANSICAOFacilityDesignationTp4Table_H_
#define	_FANSICAOFacilityDesignationTp4Table_H_


#include "asn_application.h"

/* Including external dependencies */
#include "FANSICAOfacilityDesignation.h"
#include "FANSTp4table.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* FANSICAOFacilityDesignationTp4Table */
typedef struct FANSICAOFacilityDesignationTp4Table {
	FANSICAOfacilityDesignation_t	 iCAOFacilityDesignation;
	FANSTp4table_t	 tp4table;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FANSICAOFacilityDesignationTp4Table_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FANSICAOFacilityDesignationTp4Table;

#ifdef __cplusplus
}
#endif

#endif	/* _FANSICAOFacilityDesignationTp4Table_H_ */
#include "asn_internal.h"