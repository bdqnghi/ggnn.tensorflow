@Override
public int glGenTexture() {
    WebGLTexture texture = gl.createTexture();
    return allocateTextureId(texture);
}
