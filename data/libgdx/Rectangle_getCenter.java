/**
 * Calculates the center of the rectangle. Results are located in the given Vector2
 * @param vector the Vector2 to use
 * @return the given vector with results stored inside
 */
public Vector2 getCenter(Vector2 vector) {
    vector.x = x + width / 2;
    vector.y = y + height / 2;
    return vector;
}
