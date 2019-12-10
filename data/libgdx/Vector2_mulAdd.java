@Override
public Vector2 mulAdd(Vector2 vec, Vector2 mulVec) {
    this.x += vec.x * mulVec.x;
    this.y += vec.y * mulVec.y;
    return this;
}
