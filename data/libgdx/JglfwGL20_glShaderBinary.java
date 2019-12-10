public void glShaderBinary(int n, IntBuffer shaders, int binaryformat, Buffer binary, int length) {
    GL.glShaderBinary(n, shaders, getPosition(shaders), binaryformat, binary, getPosition(binary), length);
}
