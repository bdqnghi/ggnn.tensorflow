/**
 * Moves by the specified amount of units along the y axis
 *
 * @param units Units to move the decal
 */
public void translateY(float units) {
    this.position.y += units;
    updated = false;
}
