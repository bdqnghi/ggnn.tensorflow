/**
 * Moves this rectangle so that its center point is located at a given position
 * @param position the position
 * @return this for chaining
 */
public Rectangle setCenter(Vector2 position) {
    setPosition(position.x - width / 2, position.y - height / 2);
    return this;
}
