@Override
public void glGetVertexAttribPointerv(int index, int pname, Buffer pointer) {
    throw new GdxRuntimeException("glGetVertexAttribPointer not supported by GWT WebGL backend");
}
