/**
 * Invalidates all frame buffers. This can be used when the OpenGL context is lost to rebuild all managed frame buffers. This
 * assumes that the texture attached to this buffer has already been rebuild! Use with care.
 */
public static void invalidateAllFrameBuffers(Application app) {
    if (Gdx.gl20 == null)
        return;
    Array<GLFrameBuffer> bufferArray = buffers.get(app);
    if (bufferArray == null)
        return;
    for (int i = 0; i < bufferArray.size; i++) {
        bufferArray.get(i).build();
    }
}
