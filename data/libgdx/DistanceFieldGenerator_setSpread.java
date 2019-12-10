/**
 * Sets the spread of the distance field. The spread is the maximum distance in pixels
 * that we'll scan while for a nearby edge. The resulting distance is also normalized
 * by the spread.
 *
 * @param spread a positive number
 * @throws IllegalArgumentException if spread is not positive
 */
public void setSpread(float spread) {
    if (spread <= 0)
        throw new IllegalArgumentException("spread must be positive");
    this.spread = spread;
}
