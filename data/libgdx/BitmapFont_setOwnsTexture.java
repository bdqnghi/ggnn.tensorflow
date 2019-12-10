/**
 * Sets whether the font owns the texture. In case it does, the font will also dispose of the texture when {@link #dispose()}
 * is called. Use with care!
 * @param ownsTexture whether the font owns the texture
 */
public void setOwnsTexture(boolean ownsTexture) {
    this.ownsTexture = ownsTexture;
}
