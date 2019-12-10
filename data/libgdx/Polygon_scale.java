/**
 * Applies additional scaling to the polygon by the supplied amount.
 */
public void scale(float amount) {
    this.scaleX += amount;
    this.scaleY += amount;
    dirty = true;
}
