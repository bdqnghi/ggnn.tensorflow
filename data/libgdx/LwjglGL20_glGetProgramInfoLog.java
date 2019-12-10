public String glGetProgramInfoLog(int program) {
    ByteBuffer buffer = ByteBuffer.allocateDirect(1024 * 10);
    buffer.order(ByteOrder.nativeOrder());
    ByteBuffer tmp = ByteBuffer.allocateDirect(4);
    tmp.order(ByteOrder.nativeOrder());
    IntBuffer intBuffer = tmp.asIntBuffer();
    GL20.glGetProgramInfoLog(program, intBuffer, buffer);
    int numBytes = intBuffer.get(0);
    byte[] bytes = new byte[numBytes];
    buffer.get(bytes);
    return new String(bytes);
}
