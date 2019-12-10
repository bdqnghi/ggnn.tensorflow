/**
 * Queue an animation to be applied when the current is finished. If current is continuous it will be synced on next loop.
 */
protected AnimationDesc queue(final AnimationDesc anim, float transitionTime) {
    if (current == null || current.loopCount == 0)
        animate(anim, transitionTime);
    else {
        if (queued != null)
            animationPool.free(queued);
        queued = anim;
        queuedTransitionTime = transitionTime;
        if (current.loopCount < 0)
            current.loopCount = 1;
    }
    return anim;
}
