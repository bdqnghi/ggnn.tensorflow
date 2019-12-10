/**
 * Solve a line segment using barycentric coordinates.<br/>
 * Possible regions:<br/>
 * - points[2]<br/>
 * - edge points[0]-points[2]<br/>
 * - edge points[1]-points[2]<br/>
 * - inside the triangle
 */
public void solve3() {
    w1.set(m_v1.w);
    w2.set(m_v2.w);
    w3.set(m_v3.w);
    // Edge12
    // [1 1 ][a1] = [1]
    // [w1.e12 w2.e12][a2] = [0]
    // a3 = 0
    e12.set(w2).subLocal(w1);
    float w1e12 = Vec2.dot(w1, e12);
    float w2e12 = Vec2.dot(w2, e12);
    float d12_1 = w2e12;
    float d12_2 = -w1e12;
    // Edge13
    // [1 1 ][a1] = [1]
    // [w1.e13 w3.e13][a3] = [0]
    // a2 = 0
    e13.set(w3).subLocal(w1);
    float w1e13 = Vec2.dot(w1, e13);
    float w3e13 = Vec2.dot(w3, e13);
    float d13_1 = w3e13;
    float d13_2 = -w1e13;
    // Edge23
    // [1 1 ][a2] = [1]
    // [w2.e23 w3.e23][a3] = [0]
    // a1 = 0
    e23.set(w3).subLocal(w2);
    float w2e23 = Vec2.dot(w2, e23);
    float w3e23 = Vec2.dot(w3, e23);
    float d23_1 = w3e23;
    float d23_2 = -w2e23;
    // Triangle123
    float n123 = Vec2.cross(e12, e13);
    float d123_1 = n123 * Vec2.cross(w2, w3);
    float d123_2 = n123 * Vec2.cross(w3, w1);
    float d123_3 = n123 * Vec2.cross(w1, w2);
    // w1 region
    if (d12_2 <= 0.0f && d13_2 <= 0.0f) {
        m_v1.a = 1.0f;
        m_count = 1;
        return;
    }
    // e12
    if (d12_1 > 0.0f && d12_2 > 0.0f && d123_3 <= 0.0f) {
        float inv_d12 = 1.0f / (d12_1 + d12_2);
        m_v1.a = d12_1 * inv_d12;
        m_v2.a = d12_2 * inv_d12;
        m_count = 2;
        return;
    }
    // e13
    if (d13_1 > 0.0f && d13_2 > 0.0f && d123_2 <= 0.0f) {
        float inv_d13 = 1.0f / (d13_1 + d13_2);
        m_v1.a = d13_1 * inv_d13;
        m_v3.a = d13_2 * inv_d13;
        m_count = 2;
        m_v2.set(m_v3);
        return;
    }
    // w2 region
    if (d12_1 <= 0.0f && d23_2 <= 0.0f) {
        m_v2.a = 1.0f;
        m_count = 1;
        m_v1.set(m_v2);
        return;
    }
    // w3 region
    if (d13_1 <= 0.0f && d23_1 <= 0.0f) {
        m_v3.a = 1.0f;
        m_count = 1;
        m_v1.set(m_v3);
        return;
    }
    // e23
    if (d23_1 > 0.0f && d23_2 > 0.0f && d123_1 <= 0.0f) {
        float inv_d23 = 1.0f / (d23_1 + d23_2);
        m_v2.a = d23_1 * inv_d23;
        m_v3.a = d23_2 * inv_d23;
        m_count = 2;
        m_v1.set(m_v3);
        return;
    }
    // Must be in triangle123
    float inv_d123 = 1.0f / (d123_1 + d123_2 + d123_3);
    m_v1.a = d123_1 * inv_d123;
    m_v2.a = d123_2 * inv_d123;
    m_v3.a = d123_3 * inv_d123;
    m_count = 3;
}
