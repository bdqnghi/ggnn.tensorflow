@Override
public int glGenRenderbuffer() {
    WebGLRenderbuffer rb = gl.createRenderbuffer();
    return allocateRenderBufferId(rb);
}
