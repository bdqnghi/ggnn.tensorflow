/**
 * Changes the current animation by blending the new on top of the old during the transition time.
 */
protected AnimationDesc animate(final AnimationDesc anim, float transitionTime) {
    if (current == null)
        current = anim;
    else if (inAction)
        queue(anim, transitionTime);
    else if (!allowSameAnimation && anim != null && current.animation == anim.animation) {
        anim.time = current.time;
        animationPool.free(current);
        current = anim;
    } else {
        if (previous != null) {
            removeAnimation(previous.animation);
            animationPool.free(previous);
        }
        previous = current;
        current = anim;
        transitionCurrentTime = 0f;
        transitionTargetTime = transitionTime;
    }
    return anim;
}
