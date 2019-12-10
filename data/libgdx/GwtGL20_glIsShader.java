@Override
public boolean glIsShader(int shader) {
    return gl.isShader(shaders.get(shader));
}
