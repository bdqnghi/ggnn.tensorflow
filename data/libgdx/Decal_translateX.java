/**
 * Moves by the specified amount of units along the x axis
 *
 * @param units Units to move the decal
 */
public void translateX(float units) {
    this.position.x += units;
    updated = false;
}
