/**
 * Returns the deepest actor that contains the specified point and is {@link #getTouchable() touchable} and
 * {@link #isVisible() visible}, or null if no actor was hit. The point is specified in the actor's local coordinate system
 * (0,0 is the bottom left of the actor and width,height is the upper right).
 * <p>
 * This method is used to delegate touchDown, mouse, and enter/exit events. If this method returns null, those events will not
 * occur on this Actor.
 * <p>
 * The default implementation returns this actor if the point is within this actor's bounds.
 *
 * @param touchable If true, the hit detection will respect the {@link #setTouchable(Touchable) touchability}.
 * @see Touchable
 */
public Actor hit(float x, float y, boolean touchable) {
    if (touchable && this.touchable != Touchable.enabled)
        return null;
    return x >= 0 && x < width && y >= 0 && y < height ? this : null;
}
