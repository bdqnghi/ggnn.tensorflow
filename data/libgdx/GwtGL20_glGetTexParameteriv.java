@Override
public void glGetTexParameteriv(int target, int pname, IntBuffer params) {
    throw new GdxRuntimeException("glGetTexParameter not supported by GWT WebGL backend");
}
