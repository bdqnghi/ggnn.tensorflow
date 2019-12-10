public void glUniform2fv(int location, int count, float[] v, int offset) {
    GL20.glUniform2(location, toFloatBuffer(v, offset, count << 1));
}
