public void glGetShaderPrecisionFormat(int shadertype, int precisiontype, IntBuffer range, IntBuffer precision) {
    GL.glGetShaderPrecisionFormat(shadertype, precisiontype, range, getPosition(range), precision, getPosition(precision));
}
