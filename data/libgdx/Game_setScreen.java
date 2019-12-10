/**
 * Sets the current screen. {@link Screen#hide()} is called on any old screen, and {@link Screen#show()} is called on the new
 * screen, if any.
 * @param screen may be {@code null}
 */
public void setScreen(Screen screen) {
    if (this.screen != null)
        this.screen.hide();
    this.screen = screen;
    if (this.screen != null) {
        this.screen.show();
        this.screen.resize(Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    }
}
