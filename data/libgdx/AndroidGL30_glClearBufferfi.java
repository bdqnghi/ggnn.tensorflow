@Override
public void glClearBufferfi(int buffer, int drawbuffer, float depth, int stencil) {
    GLES30.glClearBufferfi(buffer, drawbuffer, depth, stencil);
}
