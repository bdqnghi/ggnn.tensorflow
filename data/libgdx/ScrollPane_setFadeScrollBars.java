/**
 * When true the scrollbars don't reduce the scrollable size and fade out after some time of not being used.
 */
public void setFadeScrollBars(boolean fadeScrollBars) {
    if (this.fadeScrollBars == fadeScrollBars)
        return;
    this.fadeScrollBars = fadeScrollBars;
    if (!fadeScrollBars)
        fadeAlpha = fadeAlphaSeconds;
    invalidate();
}
