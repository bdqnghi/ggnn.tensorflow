/**
 * Transforms the given vector by this transform
 * @param v the vector
 */
public Vector2 mul(Vector2 v) {
    float x = vals[POS_X] + vals[COS] * v.x + -vals[SIN] * v.y;
    float y = vals[POS_Y] + vals[SIN] * v.x + vals[COS] * v.y;
    v.x = x;
    v.y = y;
    return v;
}
