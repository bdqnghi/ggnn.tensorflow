@Override
public void glClearBufferfv(int buffer, int drawbuffer, FloatBuffer value) {
    GL30.glClearBuffer(buffer, drawbuffer, value);
}
