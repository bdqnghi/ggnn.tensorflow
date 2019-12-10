@Override
public int glGenBuffer() {
    WebGLBuffer buffer = gl.createBuffer();
    return allocateBufferId(buffer);
}
