public void glGetAttachedShaders(int program, int maxcount, Buffer count, IntBuffer shaders) {
    GL.glGetAttachedShaders(program, maxcount, count, getPosition(count), shaders, getPosition(shaders));
}
