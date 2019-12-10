/**
 * Set the width of the middle column of the patch. At render time, this is implicitly the requested render-width of the entire
 * nine patch, minus the left and right width. This value is only used for computing the {@link #getTotalWidth() default total
 * width}.
 */
public void setMiddleWidth(float middleWidth) {
    this.middleWidth = middleWidth;
}
