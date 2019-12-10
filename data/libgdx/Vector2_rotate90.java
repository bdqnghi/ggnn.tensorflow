/**
 * Rotates the Vector2 by 90 degrees in the specified direction, where >= 0 is counter-clockwise and < 0 is clockwise.
 */
public Vector2 rotate90(int dir) {
    float x = this.x;
    if (dir >= 0) {
        this.x = -y;
        y = x;
    } else {
        this.x = y;
        y = -x;
    }
    return this;
}
