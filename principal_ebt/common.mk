# This is an automatically generated record.
# The area between QNX Internal Start and QNX Internal End is controlled by
# the QNX IDE properties.


ifndef QCONFIG
QCONFIG=qconfig.mk
endif
include $(QCONFIG)

#===== USEFILE - the file containing the usage message for the application. 
USEFILE=


#===== EXTRA_INCVPATH - a space-separated list of directories to search for include files.
EXTRA_INCVPATH+=$(IV_WORKDIR)/include
EXTRA_INCVPATH+=$(IV_WORKDIR)/include/wgt 
EXTRA_INCVPATH+=/usr/local/include 
EXTRA_INCVPATH+=/usr/include/libxml2 
EXTRA_INCVPATH+=/usr/include
EXTRA_INCVPATH+=/usr/include/freetype2

#===== EXTRA_LIBVPATH - a space-separated list of directories to search for library files.
EXTRA_LIBVPATH+=/opt/lib
EXTRA_LIBVPATH+=/usr/lib
EXTRA_LIBVPATH+=/usr/local/lib
EXTRA_LIBVPATH+=$(IV_WORKDIR)/lib 
EXTRA_LIBVPATH+=$(IV_WORKDIR)/lib/wgt

include $(MKFILES_ROOT)/qmacros.mk

ifeq ($(filter g, $(VARIANT_LIST)),g)
IV_LIB_SUFFIX=_g
else
IV_LIB_SUFFIX=
endif
#===== LIBS - a space-separated list of library items to be included in the link.
LIBS+=xml2 socket m z iconv
LIBS+=iv_xpath$(IV_LIB_SUFFIX) 
LIBS+=iv_heap$(IV_LIB_SUFFIX)
LIBS+=iv_cfg$(IV_LIB_SUFFIX) 
LIBS+=iv_islands$(IV_LIB_SUFFIX)
LIBS+=iv_rtdata$(IV_LIB_SUFFIX) 
LIBS+=iv_circular$(IV_LIB_SUFFIX) 
LIBS+=iv_rtserver$(IV_LIB_SUFFIX) 
LIBS+=iv_alarmsserver$(IV_LIB_SUFFIX) 
LIBS+=iv_plcdriver$(IV_LIB_SUFFIX) 
LIBS+=iv_scales$(IV_LIB_SUFFIX)
LIBS+=iv_plcs$(IV_LIB_SUFFIX) 
LIBS+=iv_scanshmem$(IV_LIB_SUFFIX) 
LIBS+=iv_general$(IV_LIB_SUFFIX) 
LIBS+=iv_loadtagscfg$(IV_LIB_SUFFIX) 
LIBS+=iv_loadalarmscfg$(IV_LIB_SUFFIX) 
LIBS+=iv_loadalarmstags$(IV_LIB_SUFFIX) 
LIBS+=iv_genexp$(IV_LIB_SUFFIX)
LIBS+=iv_fifo$(IV_LIB_SUFFIX) 
LIBS+=iv_loadbroadcast$(IV_LIB_SUFFIX) 
LIBS+=iv_alarmsdata$(IV_LIB_SUFFIX) 
LIBS+=iv_plugins$(IV_LIB_SUFFIX)
LIBS+=ivtk_user$(IV_LIB_SUFFIX) 
LIBS+=ivtk_loaduserscfg$(IV_LIB_SUFFIX) 
LIBS+=ivtk_loadpermisionscfg$(IV_LIB_SUFFIX) 
LIBS+=iv_cscodec$(IV_LIB_SUFFIX) 
LIBS+=iv_commandsserver$(IV_LIB_SUFFIX) 
LIBS+=iv_csdriverv4$(IV_LIB_SUFFIX) 
LIBS+=iv_loadcommandscfg$(IV_LIB_SUFFIX) 
LIBS+=iv_cssaverlogsXML$(IV_LIB_SUFFIX) 
LIBS+=iv_cssaverlogsBin$(IV_LIB_SUFFIX) 
LIBS+=iv_timerslist$(IV_LIB_SUFFIX) 
LIBS+=iv_loadtagsrangecfg$(IV_LIB_SUFFIX) 
LIBS+=iv_logs$(IV_LIB_SUFFIX) 
LIBS+=iv_time$(IV_LIB_SUFFIX) 
LIBS+=iv_trendsserver$(IV_LIB_SUFFIX)
LIBS+=iv_db$(IV_LIB_SUFFIX) 
LIBS+=iv_dbdata$(IV_LIB_SUFFIX)
LIBS+=iv_sdbing$(IV_LIB_SUFFIX) 
LIBS+=iv_dbloadcfg$(IV_LIB_SUFFIX)
LIBS+=tablas20$(IV_LIB_SUFFIX) 
LIBS+=print$(IV_LIB_SUFFIX)
LIBS+=ivtk_format$(IV_LIB_SUFFIX) 
LIBS+=phexlib iv_wgt$(IV_LIB_SUFFIX) 
LIBS+=iv_wgtgeneral$(IV_LIB_SUFFIX) 
LIBS+=iv_cfgAlarmsLook$(IV_LIB_SUFFIX) 
LIBS+=ivtk_utilph$(IV_LIB_SUFFIX)
LIBS+=iv_PrgAdmin$(IV_LIB_SUFFIX) 
LIBS+=iv_cfgAlarmGroups$(IV_LIB_SUFFIX) 
LIBS+=ivph_addressBook$(IV_LIB_SUFFIX) 
LIBS+=ivtk_mail$(IV_LIB_SUFFIX)
LIBS+=ppc_keyb$(IV_LIB_SUFFIX)
LIBS+=SqlUtil$(IV_LIB_SUFFIX)
#LIBS+=Iv3Timer
#LIBS+=iv3d








#QNX internal start
ifeq ($(filter g, $(VARIANT_LIST)),g)
DEBUG_SUFFIX=_g
LIB_SUFFIX=_g
else
DEBUG_SUFFIX=$(filter-out $(VARIANT_BUILD_TYPE) le be,$(VARIANT_LIST))
ifeq ($(DEBUG_SUFFIX),)
DEBUG_SUFFIX=_r
else
DEBUG_SUFFIX:=_$(DEBUG_SUFFIX)
endif
endif

EXPRESSION = $(firstword $(foreach a, $(1)_$(CPUDIR)$(DEBUG_SUFFIX)  $(1)$(DEBUG_SUFFIX) \
			$(1)_$(CPUDIR) $(1), $(if $($(a)),$(a),)))
MERGE_EXPRESSION= $(foreach a, $(1)_$(CPUDIR)$(DEBUG_SUFFIX) $(1)$(DEBUG_SUFFIX) \
			$(1)_$(CPUDIR) $(1), $($(a)))

GCC_VERSION:=$($(firstword $(foreach a, GCC_VERSION_$(CPUDIR) GCC_VERSION, \
			$(if $($(a)), $(a), ))))

EXTRA_LIBVPATH := $(call MERGE_EXPRESSION, EXTRA_LIBVPATH)
EXTRA_INCVPATH := $(call MERGE_EXPRESSION, EXTRA_INCVPATH)
EXTRA_SRCVPATH := $(call MERGE_EXPRESSION, EXTRA_SRCVPATH)
EXTRA_OBJS := $($(call EXPRESSION,EXTRA_OBJS))

CCFLAGS_D = $(CCFLAGS$(DEBUG_SUFFIX)) $(CCFLAGS_$(CPUDIR)$(DEBUG_SUFFIX)) \
			$(CCFLAGS_@$(basename $@)$(DEBUG_SUFFIX)) 					  \
			$(CCFLAGS_$(CPUDIR)_@$(basename $@)$(DEBUG_SUFFIX))
LDFLAGS_D = $(LDFLAGS$(DEBUG_SUFFIX)) $(LDFLAGS_$(CPUDIR)$(DEBUG_SUFFIX))

CCFLAGS += $(CCFLAGS_$(CPUDIR))  $(CCFLAGS_@$(basename $@)) 				  \
		   $(CCFLAGS_$(CPUDIR)_@$(basename $@))  $(CCFLAGS_D)
LDFLAGS += $(LDFLAGS_$(CPUDIR)) $(LDFLAGS_D)

LIBS:=$(foreach token, $($(call EXPRESSION,LIBS)),$(if $(findstring ^, $(token)), $(subst ^,,$(token))$(LIB_SUFFIX), $(token)))
libnames:= $(subst lib-Bdynamic.a, ,$(subst lib-Bstatic.a, , $(libnames)))
libopts := $(subst -l-B,-B, $(libopts))

BUILDNAME:=$($(call EXPRESSION,BUILDNAME))$(if $(suffix $(BUILDNAME)),,$(IMAGE_SUFF_$(BUILD_TYPE)))
BUILDNAME_SAR:= $(patsubst %$(IMAGE_SUFF_$(BUILD_TYPE)),%S.a,$(BUILDNAME))

POST_BUILD:=$($(call EXPRESSION,POST_BUILD))
#QNX internal end
include $(MKFILES_ROOT)/qphabtarg.mk


OPTIMIZE_TYPE=$(OPTIMIZE_TYPE_$(filter g, $(VARIANTS)))
OPTIMIZE_TYPE_g=none
