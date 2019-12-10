/**
 * @return The OpenGL handle of the (optional) stencil buffer (see {@link GL20#glGenRenderbuffer()}). May return 0 even if stencil buffer enabled
 */
public int getStencilBufferHandle() {
    return stencilbufferHandle;
}
