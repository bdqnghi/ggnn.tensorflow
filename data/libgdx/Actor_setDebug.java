/**
 * If true, {@link #drawDebug(ShapeRenderer)} will be called for this actor.
 */
public void setDebug(boolean enabled) {
    debug = enabled;
    if (enabled)
        Stage.debug = true;
}
