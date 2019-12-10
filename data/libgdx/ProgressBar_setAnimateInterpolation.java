/**
 * Sets the interpolation to use for {@link #setAnimateDuration(float)}.
 */
public void setAnimateInterpolation(Interpolation animateInterpolation) {
    if (animateInterpolation == null)
        throw new IllegalArgumentException("animateInterpolation cannot be null.");
    this.animateInterpolation = animateInterpolation;
}
