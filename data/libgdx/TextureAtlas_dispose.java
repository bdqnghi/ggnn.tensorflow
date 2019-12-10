/**
 * Releases all resources associated with this TextureAtlas instance. This releases all the textures backing all TextureRegions
 * and Sprites, which should no longer be used after calling dispose.
 */
public void dispose() {
    for (Texture texture : textures) texture.dispose();
    textures.clear();
}
