/**
 * @see Decal#translate(float, float, float)
 */
public void translate(Vector3 trans) {
    this.position.add(trans);
    updated = false;
}
