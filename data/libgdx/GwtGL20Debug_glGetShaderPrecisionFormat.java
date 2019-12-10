@Override
public void glGetShaderPrecisionFormat(int shadertype, int precisiontype, IntBuffer range, IntBuffer precision) {
    super.glGetShaderPrecisionFormat(shadertype, precisiontype, range, precision);
    checkError();
}
