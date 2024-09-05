/*This is a new NGAP message created by Valentina, this message was created to boycot the traditional authentication procedure and instead validate the ue upon reception of the Initial UE message*/

#ifndef _NGAP_NGRegistrationAccept_H_
#define _NGAP_NGRegistrationAccept_H_

#include <asn_application.h>
/* Including external dependencies */
#include "NGAP_ProtocolIE-Container.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/*NGAP_NGRegistrationAccept*/
typedef struct NGAP_NGRegistrationAccept
{
    NGAP_ProtocolIE_Container_11854P123_t	 protocolIEs;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
}NGAP_NGRegistrationAccept_t;
/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_NGRegistrationAccept;
extern asn_SEQUENCE_specifics_t asn_SPC_NGAP_NGRegistrationAccept_specs_1;
extern asn_TYPE_member_t asn_MBR_NGAP_NGRegistrationAccept_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_NGSetupResponse_H_ */
#include <asn_internal.h>