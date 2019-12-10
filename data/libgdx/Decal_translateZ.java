/**
 * Moves by the specified amount of units along the z axis
 *
 * @param units Units to move the decal
 */
public void translateZ(float units) {
    this.position.z += units;
    updated = false;
}
