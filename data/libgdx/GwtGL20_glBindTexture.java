@Override
public void glBindTexture(int target, int texture) {
    gl.bindTexture(target, textures.get(texture));
}
