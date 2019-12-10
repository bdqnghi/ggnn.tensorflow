/**
 * Apply two animations, blending the second onto to first using weight.
 */
protected void applyAnimations(final Animation anim1, final float time1, final Animation anim2, final float time2, final float weight) {
    if (anim2 == null || weight == 0.f)
        applyAnimation(anim1, time1);
    else if (anim1 == null || weight == 1.f)
        applyAnimation(anim2, time2);
    else if (applying)
        throw new GdxRuntimeException("Call end() first");
    else {
        begin();
        apply(anim1, time1, 1.f);
        apply(anim2, time2, weight);
        end();
    }
}
