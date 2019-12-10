@Override
public void glGetShaderPrecisionFormat(int shadertype, int precisiontype, IntBuffer range, IntBuffer precision) {
    calls++;
    gl30.glGetShaderPrecisionFormat(shadertype, precisiontype, range, precision);
    check();
}
