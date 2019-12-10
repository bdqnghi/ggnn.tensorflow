/**
 * If true, when a pixmap is packed to a page that has a texture, the portion of the texture where the pixmap was packed is
 * updated using glTexSubImage2D. Note if packing many pixmaps, this may be slower than reuploading the whole texture. This
 * setting is ignored if {@link #getDuplicateBorder()} is true.
 */
public void setPackToTexture(boolean packToTexture) {
    this.packToTexture = packToTexture;
}
