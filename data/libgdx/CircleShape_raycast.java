// Collision Detection in Interactive 3D Environments by Gino van den Bergen
// From Section 3.1.2
// x = s + a * r
// norm(x) = radius
@Override
public final boolean raycast(RayCastOutput output, RayCastInput input, Transform transform, int childIndex) {
    final Vec2 inputp1 = input.p1;
    final Vec2 inputp2 = input.p2;
    final Rot tq = transform.q;
    final Vec2 tp = transform.p;
    // Rot.mulToOutUnsafe(transform.q, m_p, position);
    // position.addLocal(transform.p);
    final float positionx = tq.c * m_p.x - tq.s * m_p.y + tp.x;
    final float positiony = tq.s * m_p.x + tq.c * m_p.y + tp.y;
    final float sx = inputp1.x - positionx;
    final float sy = inputp1.y - positiony;
    // final float b = Vec2.dot(s, s) - m_radius * m_radius;
    final float b = sx * sx + sy * sy - m_radius * m_radius;
    // Solve quadratic equation.
    final float rx = inputp2.x - inputp1.x;
    final float ry = inputp2.y - inputp1.y;
    // final float c = Vec2.dot(s, r);
    // final float rr = Vec2.dot(r, r);
    final float c = sx * rx + sy * ry;
    final float rr = rx * rx + ry * ry;
    final float sigma = c * c - rr * b;
    // Check for negative discriminant and short segment.
    if (sigma < 0.0f || rr < Settings.EPSILON) {
        return false;
    }
    // Find the point of intersection of the line with the circle.
    float a = -(c + MathUtils.sqrt(sigma));
    // Is the intersection point on the segment?
    if (0.0f <= a && a <= input.maxFraction * rr) {
        a /= rr;
        output.fraction = a;
        output.normal.x = rx * a + sx;
        output.normal.y = ry * a + sy;
        output.normal.normalize();
        return true;
    }
    return false;
}
