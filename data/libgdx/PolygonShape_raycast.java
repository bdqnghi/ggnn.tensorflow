@Override
public final boolean raycast(RayCastOutput output, RayCastInput input, Transform xf, int childIndex) {
    final float xfqc = xf.q.c;
    final float xfqs = xf.q.s;
    final Vec2 xfp = xf.p;
    float tempx, tempy;
    // b2Vec2 p1 = b2MulT(xf.q, input.p1 - xf.p);
    // b2Vec2 p2 = b2MulT(xf.q, input.p2 - xf.p);
    tempx = input.p1.x - xfp.x;
    tempy = input.p1.y - xfp.y;
    final float p1x = xfqc * tempx + xfqs * tempy;
    final float p1y = -xfqs * tempx + xfqc * tempy;
    tempx = input.p2.x - xfp.x;
    tempy = input.p2.y - xfp.y;
    final float p2x = xfqc * tempx + xfqs * tempy;
    final float p2y = -xfqs * tempx + xfqc * tempy;
    final float dx = p2x - p1x;
    final float dy = p2y - p1y;
    float lower = 0, upper = input.maxFraction;
    int index = -1;
    for (int i = 0; i < m_count; ++i) {
        Vec2 normal = m_normals[i];
        Vec2 vertex = m_vertices[i];
        // p = p1 + a * d
        // dot(normal, p - v) = 0
        // dot(normal, p1 - v) + a * dot(normal, d) = 0
        float tempxn = vertex.x - p1x;
        float tempyn = vertex.y - p1y;
        final float numerator = normal.x * tempxn + normal.y * tempyn;
        final float denominator = normal.x * dx + normal.y * dy;
        if (denominator == 0.0f) {
            if (numerator < 0.0f) {
                return false;
            }
        } else {
            // numerator.
            if (denominator < 0.0f && numerator < lower * denominator) {
                // Increase lower.
                // The segment enters this half-space.
                lower = numerator / denominator;
                index = i;
            } else if (denominator > 0.0f && numerator < upper * denominator) {
                // Decrease upper.
                // The segment exits this half-space.
                upper = numerator / denominator;
            }
        }
        if (upper < lower) {
            return false;
        }
    }
    assert (0.0f <= lower && lower <= input.maxFraction);
    if (index >= 0) {
        output.fraction = lower;
        // normal = Mul(xf.R, m_normals[index]);
        Vec2 normal = m_normals[index];
        Vec2 out = output.normal;
        out.x = xfqc * normal.x - xfqs * normal.y;
        out.y = xfqs * normal.x + xfqc * normal.y;
        return true;
    }
    return false;
}
