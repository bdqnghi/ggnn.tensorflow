/**
 * Update any animations currently being played.
 * @param delta The time elapsed since last update, change this to alter the overall speed (can be negative).
 */
public void update(float delta) {
    if (paused)
        return;
    if (previous != null && ((transitionCurrentTime += delta) >= transitionTargetTime)) {
        removeAnimation(previous.animation);
        justChangedAnimation = true;
        animationPool.free(previous);
        previous = null;
    }
    if (justChangedAnimation) {
        target.calculateTransforms();
        justChangedAnimation = false;
    }
    if (current == null || current.loopCount == 0 || current.animation == null)
        return;
    final float remain = current.update(delta);
    if (remain != 0f && queued != null) {
        inAction = false;
        animate(queued, queuedTransitionTime);
        queued = null;
        update(remain);
        return;
    }
    if (previous != null)
        applyAnimations(previous.animation, previous.offset + previous.time, current.animation, current.offset + current.time, transitionCurrentTime / transitionTargetTime);
    else
        applyAnimation(current.animation, current.offset + current.time);
}
