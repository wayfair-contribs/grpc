/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/api/v2/core/config_source.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_API_V2_CORE_CONFIG_SOURCE_PROTO_UPBDEFS_H_
#define ENVOY_API_V2_CORE_CONFIG_SOURCE_PROTO_UPBDEFS_H_

#include "upb/def.h"
#include "upb/port_def.inc"
#ifdef __cplusplus
extern "C" {
#endif

#include "upb/def.h"

#include "upb/port_def.inc"

extern upb_def_init envoy_api_v2_core_config_source_proto_upbdefinit;

UPB_INLINE const upb_msgdef *envoy_api_v2_core_ApiConfigSource_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_api_v2_core_config_source_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.api.v2.core.ApiConfigSource");
}

UPB_INLINE const upb_msgdef *envoy_api_v2_core_AggregatedConfigSource_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_api_v2_core_config_source_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.api.v2.core.AggregatedConfigSource");
}

UPB_INLINE const upb_msgdef *envoy_api_v2_core_SelfConfigSource_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_api_v2_core_config_source_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.api.v2.core.SelfConfigSource");
}

UPB_INLINE const upb_msgdef *envoy_api_v2_core_RateLimitSettings_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_api_v2_core_config_source_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.api.v2.core.RateLimitSettings");
}

UPB_INLINE const upb_msgdef *envoy_api_v2_core_ConfigSource_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_api_v2_core_config_source_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.api.v2.core.ConfigSource");
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* ENVOY_API_V2_CORE_CONFIG_SOURCE_PROTO_UPBDEFS_H_ */
