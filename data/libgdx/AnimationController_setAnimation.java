/**
 * Set the active animation, replacing any current animation.
 */
protected AnimationDesc setAnimation(final AnimationDesc anim) {
    if (current == null)
        current = anim;
    else {
        if (!allowSameAnimation && anim != null && current.animation == anim.animation)
            anim.time = current.time;
        else
            removeAnimation(current.animation);
        animationPool.free(current);
        current = anim;
    }
    justChangedAnimation = true;
    return anim;
}
