/**
 * Apply an animation, must be called between {{@link #begin()} and {{@link #end()}.
 * @param weight The blend weight of this animation relative to the previous applied animations.
 */
protected void apply(final Animation animation, final float time, final float weight) {
    if (!applying)
        throw new GdxRuntimeException("You must call begin() before adding an animation");
    applyAnimation(transforms, transformPool, weight, animation, time);
}
