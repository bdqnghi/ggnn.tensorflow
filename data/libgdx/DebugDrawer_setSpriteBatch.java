/**
 * Switches the {@link SpriteBatch}. The given sprite batch won't be disposed when {@link #dispose()} is called.
 */
public void setSpriteBatch(SpriteBatch spriteBatch) {
    if (ownsSpriteBatch && this.spriteBatch != null) {
        this.spriteBatch.dispose();
    }
    this.spriteBatch = spriteBatch;
    ownsSpriteBatch = false;
}
