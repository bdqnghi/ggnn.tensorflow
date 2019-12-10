/**
 * Computes the barycentric coordinates v,w for the specified point in the triangle.
 * <p>
 * If barycentric.x >= 0 && barycentric.y >= 0 && barycentric.x + barycentric.y <= 1 then the point is inside the triangle.
 * <p>
 * If vertices a,b,c have values aa,bb,cc then to get an interpolated value at point p:
 *
 * <pre>
 * GeometryUtils.barycentric(p, a, b, c, barycentric);
 * float u = 1.f - barycentric.x - barycentric.y;
 * float x = u * aa.x + barycentric.x * bb.x + barycentric.y * cc.x;
 * float y = u * aa.y + barycentric.x * bb.y + barycentric.y * cc.y;
 * </pre>
 * @return barycentricOut
 */
static public Vector2 toBarycoord(Vector2 p, Vector2 a, Vector2 b, Vector2 c, Vector2 barycentricOut) {
    Vector2 v0 = tmp1.set(b).sub(a);
    Vector2 v1 = tmp2.set(c).sub(a);
    Vector2 v2 = tmp3.set(p).sub(a);
    float d00 = v0.dot(v0);
    float d01 = v0.dot(v1);
    float d11 = v1.dot(v1);
    float d20 = v2.dot(v0);
    float d21 = v2.dot(v1);
    float denom = d00 * d11 - d01 * d01;
    barycentricOut.x = (d11 * d20 - d01 * d21) / denom;
    barycentricOut.y = (d00 * d21 - d01 * d20) / denom;
    return barycentricOut;
}
