public final Shape clone() {
    CircleShape shape = new CircleShape();
    shape.m_p.x = m_p.x;
    shape.m_p.y = m_p.y;
    shape.m_radius = m_radius;
    return shape;
}
