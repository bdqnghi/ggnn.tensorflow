/**
 * @return The OpenGL handle of the (optional) depth buffer (see {@link GL20#glGenRenderbuffer()}). May return 0 even if depth buffer enabled
 */
public int getDepthBufferHandle() {
    return depthbufferHandle;
}
