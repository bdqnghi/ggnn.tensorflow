/**
 * The world position of the body. Avoid creating bodies at the origin since this can lead to many
 * overlapping shapes.
 */
public void setPosition(Vec2 position) {
    this.position = position;
}
