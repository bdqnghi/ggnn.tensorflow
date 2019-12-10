/**
 * Returns an interpolated value given the barycentric coordinates of a point in a triangle and the values at each vertex.
 * @return interpolatedOut
 */
static public float fromBarycoord(Vector2 barycentric, float a, float b, float c) {
    float u = 1 - barycentric.x - barycentric.y;
    return u * a + barycentric.x * b + barycentric.y * c;
}
