/**
 * Get the skew vector such that dot(skew_vec, other) == cross(vec, other)
 */
public final void skew(Vec2 out) {
    out.x = -y;
    out.y = x;
}
