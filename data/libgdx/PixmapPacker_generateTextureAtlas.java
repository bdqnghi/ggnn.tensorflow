/**
 * Generates a new {@link TextureAtlas} from the pixmaps inserted so far. After calling this method, disposing the packer will
 * no longer dispose the page pixmaps.
 */
public synchronized TextureAtlas generateTextureAtlas(TextureFilter minFilter, TextureFilter magFilter, boolean useMipMaps) {
    TextureAtlas atlas = new TextureAtlas();
    updateTextureAtlas(atlas, minFilter, magFilter, useMipMaps);
    return atlas;
}
