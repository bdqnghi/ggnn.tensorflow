/**
 * Set the height of the middle row of the patch. At render time, this is implicitly the requested render-height of the entire
 * nine patch, minus the top and bottom height. This value is only used for computing the {@link #getTotalHeight() default
 * total height}.
 */
public void setMiddleHeight(float middleHeight) {
    this.middleHeight = middleHeight;
}
