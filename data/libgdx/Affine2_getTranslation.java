/**
 * Get the x-y translation component of the matrix.
 * @param position Output vector.
 * @return Filled position.
 */
public Vector2 getTranslation(Vector2 position) {
    position.x = m02;
    position.y = m12;
    return position;
}
