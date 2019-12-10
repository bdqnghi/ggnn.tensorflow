@Override
public void glClearBufferiv(int buffer, int drawbuffer, IntBuffer value) {
    GL30.glClearBuffer(buffer, drawbuffer, value);
}
