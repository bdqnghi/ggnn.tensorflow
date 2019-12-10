@Override
public boolean glIsTexture(int texture) {
    return gl.isTexture(textures.get(texture));
}
