private void build() {
    GL20 gl = Gdx.gl20;
    // iOS uses a different framebuffer handle! (not necessarily 0)
    if (!defaultFramebufferHandleInitialized) {
        defaultFramebufferHandleInitialized = true;
        if (Gdx.app.getType() == ApplicationType.iOS) {
            IntBuffer intbuf = ByteBuffer.allocateDirect(16 * Integer.SIZE / 8).order(ByteOrder.nativeOrder()).asIntBuffer();
            gl.glGetIntegerv(GL20.GL_FRAMEBUFFER_BINDING, intbuf);
            defaultFramebufferHandle = intbuf.get(0);
        } else {
            defaultFramebufferHandle = 0;
        }
    }
    colorTexture = createColorTexture();
    framebufferHandle = gl.glGenFramebuffer();
    if (hasDepth) {
        depthbufferHandle = gl.glGenRenderbuffer();
    }
    if (hasStencil) {
        stencilbufferHandle = gl.glGenRenderbuffer();
    }
    gl.glBindTexture(GL20.GL_TEXTURE_2D, colorTexture.getTextureObjectHandle());
    if (hasDepth) {
        gl.glBindRenderbuffer(GL20.GL_RENDERBUFFER, depthbufferHandle);
        gl.glRenderbufferStorage(GL20.GL_RENDERBUFFER, GL20.GL_DEPTH_COMPONENT16, colorTexture.getWidth(), colorTexture.getHeight());
    }
    if (hasStencil) {
        gl.glBindRenderbuffer(GL20.GL_RENDERBUFFER, stencilbufferHandle);
        gl.glRenderbufferStorage(GL20.GL_RENDERBUFFER, GL20.GL_STENCIL_INDEX8, colorTexture.getWidth(), colorTexture.getHeight());
    }
    gl.glBindFramebuffer(GL20.GL_FRAMEBUFFER, framebufferHandle);
    gl.glFramebufferTexture2D(GL20.GL_FRAMEBUFFER, GL20.GL_COLOR_ATTACHMENT0, GL20.GL_TEXTURE_2D, colorTexture.getTextureObjectHandle(), 0);
    if (hasDepth) {
        gl.glFramebufferRenderbuffer(GL20.GL_FRAMEBUFFER, GL20.GL_DEPTH_ATTACHMENT, GL20.GL_RENDERBUFFER, depthbufferHandle);
    }
    if (hasStencil) {
        gl.glFramebufferRenderbuffer(GL20.GL_FRAMEBUFFER, GL20.GL_STENCIL_ATTACHMENT, GL20.GL_RENDERBUFFER, stencilbufferHandle);
    }
    gl.glBindRenderbuffer(GL20.GL_RENDERBUFFER, 0);
    gl.glBindTexture(GL20.GL_TEXTURE_2D, 0);
    int result = gl.glCheckFramebufferStatus(GL20.GL_FRAMEBUFFER);
    if (result == GL20.GL_FRAMEBUFFER_UNSUPPORTED && hasDepth && hasStencil && (Gdx.graphics.supportsExtension("GL_OES_packed_depth_stencil") || Gdx.graphics.supportsExtension("GL_EXT_packed_depth_stencil"))) {
        if (hasDepth) {
            gl.glDeleteRenderbuffer(depthbufferHandle);
            depthbufferHandle = 0;
        }
        if (hasStencil) {
            gl.glDeleteRenderbuffer(stencilbufferHandle);
            stencilbufferHandle = 0;
        }
        depthStencilPackedBufferHandle = gl.glGenRenderbuffer();
        hasDepthStencilPackedBuffer = true;
        gl.glBindRenderbuffer(GL20.GL_RENDERBUFFER, depthStencilPackedBufferHandle);
        gl.glRenderbufferStorage(GL20.GL_RENDERBUFFER, GL_DEPTH24_STENCIL8_OES, colorTexture.getWidth(), colorTexture.getHeight());
        gl.glBindRenderbuffer(GL20.GL_RENDERBUFFER, 0);
        gl.glFramebufferRenderbuffer(GL20.GL_FRAMEBUFFER, GL20.GL_DEPTH_ATTACHMENT, GL20.GL_RENDERBUFFER, depthStencilPackedBufferHandle);
        gl.glFramebufferRenderbuffer(GL20.GL_FRAMEBUFFER, GL20.GL_STENCIL_ATTACHMENT, GL20.GL_RENDERBUFFER, depthStencilPackedBufferHandle);
        result = gl.glCheckFramebufferStatus(GL20.GL_FRAMEBUFFER);
    }
    gl.glBindFramebuffer(GL20.GL_FRAMEBUFFER, defaultFramebufferHandle);
    if (result != GL20.GL_FRAMEBUFFER_COMPLETE) {
        disposeColorTexture(colorTexture);
        if (hasDepthStencilPackedBuffer) {
            gl.glDeleteBuffer(depthStencilPackedBufferHandle);
        } else {
            if (hasDepth)
                gl.glDeleteRenderbuffer(depthbufferHandle);
            if (hasStencil)
                gl.glDeleteRenderbuffer(stencilbufferHandle);
        }
        gl.glDeleteFramebuffer(framebufferHandle);
        if (result == GL20.GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT)
            throw new IllegalStateException("frame buffer couldn't be constructed: incomplete attachment");
        if (result == GL20.GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS)
            throw new IllegalStateException("frame buffer couldn't be constructed: incomplete dimensions");
        if (result == GL20.GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT)
            throw new IllegalStateException("frame buffer couldn't be constructed: missing attachment");
        if (result == GL20.GL_FRAMEBUFFER_UNSUPPORTED)
            throw new IllegalStateException("frame buffer couldn't be constructed: unsupported combination of formats");
        throw new IllegalStateException("frame buffer couldn't be constructed: unknown error " + result);
    }
}
