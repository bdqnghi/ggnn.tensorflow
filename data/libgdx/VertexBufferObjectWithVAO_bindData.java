private void bindData(GL20 gl) {
    if (isDirty) {
        gl.glBindBuffer(GL20.GL_ARRAY_BUFFER, bufferHandle);
        byteBuffer.limit(buffer.limit() * 4);
        gl.glBufferData(GL20.GL_ARRAY_BUFFER, byteBuffer.limit(), byteBuffer, usage);
        isDirty = false;
    }
}
