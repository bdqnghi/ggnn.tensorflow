@Override
public void glClearBufferfv(int buffer, int drawbuffer, FloatBuffer value) {
    calls++;
    gl30.glClearBufferfv(buffer, drawbuffer, value);
    check();
}
