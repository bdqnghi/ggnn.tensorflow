/**
 * Adds the specified rotation to the current rotation.
 */
public void rotateBy(float amountInDegrees) {
    if (amountInDegrees != 0) {
        rotation += amountInDegrees;
        rotationChanged();
    }
}
