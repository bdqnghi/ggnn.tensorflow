@Override
public void glClearBufferiv(int buffer, int drawbuffer, IntBuffer value) {
    calls++;
    gl30.glClearBufferiv(buffer, drawbuffer, value);
    check();
}
