/* NGAP_RegistrationAcceptmessage created by Valentina*/

#include "NGAP_NGRegistrationAccept.h"

asn_TYPE_member_t asn_MBR_NGAP_NGRegistrationAccept_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NGAP_NGRegistrationAccept, protocolIEs),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_ProtocolIE_Container_11854P123,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"protocolIEs"
		},
};
static const ber_tlv_tag_t asn_DEF_NGAP_NGRegistrationAccept_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NGAP_NGRegistrationAccept_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* protocolIEs */
};
asn_SEQUENCE_specifics_t asn_SPC_NGAP_NGRegistrationAccept_specs_1 = {
	sizeof(struct NGAP_NGRegistrationAccept),
	offsetof(struct NGAP_NGRegistrationAccept, _asn_ctx),
	asn_MAP_NGAP_NGRegistrationAccept_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NGAP_NGRegistrationAccept = {
	"NGSetupResponse",
	"NGSetupResponse",
	&asn_OP_SEQUENCE,
	asn_DEF_NGAP_NGRegistrationAccept_tags_1,
	sizeof(asn_DEF_NGAP_NGRegistrationAccept_tags_1)
		/sizeof(asn_DEF_NGAP_NGRegistrationAccept_tags_1[0]), /* 1 */
	asn_DEF_NGAP_NGRegistrationAccept_tags_1,	/* Same as above */
	sizeof(asn_DEF_NGAP_NGRegistrationAccept_tags_1)
		/sizeof(asn_DEF_NGAP_NGRegistrationAccept_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NGAP_NGRegistrationAccept_1,
	1,	/* Elements count */
	&asn_SPC_NGAP_NGRegistrationAccept_specs_1	/* Additional specs */
};

