/**
 * Returns true if the barycentric coordinates are inside the triangle.
 */
static public boolean barycoordInsideTriangle(Vector2 barycentric) {
    return barycentric.x >= 0 && barycentric.y >= 0 && barycentric.x + barycentric.y <= 1;
}
