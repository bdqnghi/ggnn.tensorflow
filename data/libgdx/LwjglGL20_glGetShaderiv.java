public void glGetShaderiv(int shader, int pname, IntBuffer params) {
    GL20.glGetShader(shader, pname, params);
}
