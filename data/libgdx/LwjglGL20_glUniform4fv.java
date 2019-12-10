public void glUniform4fv(int location, int count, float[] v, int offset) {
    GL20.glUniform4(location, toFloatBuffer(v, offset, count << 2));
}
