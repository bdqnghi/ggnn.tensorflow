// djm pooled from above
/**
 * Solve a line segment using barycentric coordinates.
 */
public void solve2() {
    // Solve a line segment using barycentric coordinates.
    // 
    // p = a1 * w1 + a2 * w2
    // a1 + a2 = 1
    // 
    // The vector from the origin to the closest point on the line is
    // perpendicular to the line.
    // e12 = w2 - w1
    // dot(p, e) = 0
    // a1 * dot(w1, e) + a2 * dot(w2, e) = 0
    // 
    // 2-by-2 linear system
    // [1 1 ][a1] = [1]
    // [w1.e12 w2.e12][a2] = [0]
    // 
    // Define
    // d12_1 = dot(w2, e12)
    // d12_2 = -dot(w1, e12)
    // d12 = d12_1 + d12_2
    // 
    // Solution
    // a1 = d12_1 / d12
    // a2 = d12_2 / d12
    final Vec2 w1 = m_v1.w;
    final Vec2 w2 = m_v2.w;
    e12.set(w2).subLocal(w1);
    // w1 region
    float d12_2 = -Vec2.dot(w1, e12);
    if (d12_2 <= 0.0f) {
        // a2 <= 0, so we clamp it to 0
        m_v1.a = 1.0f;
        m_count = 1;
        return;
    }
    // w2 region
    float d12_1 = Vec2.dot(w2, e12);
    if (d12_1 <= 0.0f) {
        // a1 <= 0, so we clamp it to 0
        m_v2.a = 1.0f;
        m_count = 1;
        m_v1.set(m_v2);
        return;
    }
    // Must be in e12 region.
    float inv_d12 = 1.0f / (d12_1 + d12_2);
    m_v1.a = d12_1 * inv_d12;
    m_v2.a = d12_2 * inv_d12;
    m_count = 2;
}
