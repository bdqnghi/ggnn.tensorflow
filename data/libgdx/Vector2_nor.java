@Override
public Vector2 nor() {
    float len = len();
    if (len != 0) {
        x /= len;
        y /= len;
    }
    return this;
}
