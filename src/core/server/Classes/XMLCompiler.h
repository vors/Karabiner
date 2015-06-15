// -*- Mode: objc; Coding: utf-8; indent-tabs-mode: nil; -*-

#import <Cocoa/Cocoa.h>
#include "pqrs/xml_compiler_bindings_clang.h"

@class ClientForKernelspace;

@interface XMLCompiler : NSObject {
  IBOutlet ClientForKernelspace* clientForKernelspace_;
}

+ (NSString*)get_private_xml_path;

- (void)reload;

- (size_t)remapclasses_initialize_vector_size;
- (const uint32_t*)remapclasses_initialize_vector_data;
- (uint32_t)remapclasses_initialize_vector_config_count;

- (uint32_t)keycode:(NSString*)name;
- (NSString*)identifier:(uint32_t)config_index;
- (NSString*)symbolMapName:(NSString*)type value:(uint32_t)value;
- (int)config_index:(NSString*)identifier;
- (NSArray*)appids:(NSString*)bundleIdentifier;
- (uint32_t)windownameid:(NSString*)windowName;
- (uint32_t)uielementroleid:(NSString*)uiElementRole;
- (BOOL)is_vk_change_inputsource_matched:(uint32_t)keycode
                            languagecode:(NSString*)languagecode
                           inputSourceID:(NSString*)inputSourceID
                             inputModeID:(NSString*)inputModeID;
- (void)inputsourceid:(uint32_t*)inputSource
    inputSourceDetail:(uint32_t*)inputSourceDetail
         languagecode:(NSString*)languagecode
        inputSourceID:(NSString*)inputSourceID
          inputModeID:(NSString*)inputModeID;
- (NSString*)url:(uint32_t)keycode;
- (NSString*)urlType:(uint32_t)keycode;
- (BOOL)urlIsBackground:(uint32_t)keycode;

- (NSArray*)preferencepane_checkbox;
- (NSArray*)preferencepane_number;
- (NSString*)preferencepane_error_message;

@end
