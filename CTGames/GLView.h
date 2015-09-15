
//
//  GLView.h
//  CTGames
//
//  Created by CT on 9/15/15.
//  Copyright (c) 2015 CT. All rights reserved.
//

#ifndef CTGames_GLView_h
#define CTGames_GLView_h
#import <UIKit/UIKit.h>
#import <OpenGLES/ES2/gl.h>
#import <OpenGLES/ES2/glext.h>

@interface GLView : UIView {
@private
    EAGLContext *context;
    
    GLint framebufferWidth, framebufferHeight;
    
    GLuint defaultFramebuffer, colorRenderbuffer, depthRenderbuffer;
}

- (void)setFramebuffer;
- (BOOL)presentFramebuffer;

@end

#endif
