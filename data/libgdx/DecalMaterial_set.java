/**
 * Binds the material's texture to the OpenGL context and changes the glBlendFunc to the values used by it.
 */
public void set() {
    textureRegion.getTexture().bind();
    if (!isOpaque()) {
        Gdx.gl.glBlendFunc(srcBlendFactor, dstBlendFactor);
    }
}
