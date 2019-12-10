public void glGetAttachedShaders(int program, int maxcount, Buffer count, IntBuffer shaders) {
    GL20.glGetAttachedShaders(program, (IntBuffer) count, shaders);
}
