public void glGetBooleanv(int pname, Buffer params) {
    GL11.glGetBoolean(pname, (ByteBuffer) params);
}
