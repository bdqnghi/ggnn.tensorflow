@Override
public void glGetShaderPrecisionFormat(int shadertype, int precisiontype, IntBuffer range, IntBuffer precision) {
    throw new GdxRuntimeException("glGetShaderPrecisionFormat not supported by GWT WebGL backend");
}
