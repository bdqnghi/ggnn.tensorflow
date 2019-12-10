@Override
public void glClearBufferuiv(int buffer, int drawbuffer, IntBuffer value) {
    calls++;
    gl30.glClearBufferuiv(buffer, drawbuffer, value);
    check();
}
