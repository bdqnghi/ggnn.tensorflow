/**
 * Sets scale along both the x and y axis
 *
 * @param scale New scale
 */
public void setScale(float scale) {
    this.scale.set(scale, scale);
    updated = false;
}
