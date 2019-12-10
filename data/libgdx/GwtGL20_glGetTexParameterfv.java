@Override
public void glGetTexParameterfv(int target, int pname, FloatBuffer params) {
    throw new GdxRuntimeException("glGetTexParameter not supported by GWT WebGL backend");
}
