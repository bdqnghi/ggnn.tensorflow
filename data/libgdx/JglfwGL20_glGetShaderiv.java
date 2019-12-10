public void glGetShaderiv(int shader, int pname, IntBuffer params) {
    GL.glGetShaderiv(shader, pname, params, getPosition(params));
}
