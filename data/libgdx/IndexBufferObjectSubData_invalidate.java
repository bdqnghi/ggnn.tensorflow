/**
 * Invalidates the IndexBufferObject so a new OpenGL buffer handle is created. Use this in case of a context loss.
 */
public void invalidate() {
    bufferHandle = createBufferObject();
    isDirty = true;
}
