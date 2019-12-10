@Override
public void glGetFloatv(int pname, FloatBuffer params) {
    if (pname == GL20.GL_DEPTH_CLEAR_VALUE || pname == GL20.GL_LINE_WIDTH || pname == GL20.GL_POLYGON_OFFSET_FACTOR || pname == GL20.GL_POLYGON_OFFSET_UNITS || pname == GL20.GL_SAMPLE_COVERAGE_VALUE)
        params.put(0, gl.getParameterf(pname));
    else
        throw new GdxRuntimeException("glGetFloat not supported by GWT WebGL backend");
}
