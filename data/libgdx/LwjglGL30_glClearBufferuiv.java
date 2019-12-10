@Override
public void glClearBufferuiv(int buffer, int drawbuffer, IntBuffer value) {
    GL30.glClearBufferu(buffer, drawbuffer, value);
}
