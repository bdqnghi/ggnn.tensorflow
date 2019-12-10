@Override
public void glClearBufferfi(int buffer, int drawbuffer, float depth, int stencil) {
    calls++;
    gl30.glClearBufferfi(buffer, drawbuffer, depth, stencil);
    check();
}
