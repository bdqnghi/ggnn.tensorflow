/**
 * Sets the rotation of the Decal to face the given point. Useful for billboarding.
 * @param position
 * @param up
 */
public void lookAt(Vector3 position, Vector3 up) {
    dir.set(position).sub(this.position).nor();
    setRotation(dir, up);
}
