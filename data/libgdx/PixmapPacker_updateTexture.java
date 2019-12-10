/**
 * Creates the texture if it has not been created, else reuploads the entire page pixmap to the texture if the pixmap has
 * changed since this method was last called.
 * @return true if the texture was created or reuploaded.
 */
public boolean updateTexture(TextureFilter minFilter, TextureFilter magFilter, boolean useMipMaps) {
    if (texture != null) {
        if (!dirty)
            return false;
        texture.load(texture.getTextureData());
    } else {
        texture = new Texture(new PixmapTextureData(image, image.getFormat(), useMipMaps, false, true)) {

            @Override
            public void dispose() {
                super.dispose();
                image.dispose();
            }
        };
        texture.setFilter(minFilter, magFilter);
    }
    dirty = false;
    return true;
}
