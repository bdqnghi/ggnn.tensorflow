/**
 * Apply an action animation on top of the current animation.
 */
protected AnimationDesc action(final AnimationDesc anim, float transitionTime) {
    if (anim.loopCount < 0)
        throw new GdxRuntimeException("An action cannot be continuous");
    if (current == null || current.loopCount == 0)
        animate(anim, transitionTime);
    else {
        AnimationDesc toQueue = inAction ? null : obtain(current);
        inAction = false;
        animate(anim, transitionTime);
        inAction = true;
        if (toQueue != null)
            queue(toQueue, transitionTime);
    }
    return anim;
}
