/**
 * Initialize the proxy using the given shape. The shape must remain in scope while the proxy is
 * in use.
 */
public final void set(final Shape shape, int index) {
    switch(shape.getType()) {
        case CIRCLE:
            final CircleShape circle = (CircleShape) shape;
            m_vertices[0].set(circle.m_p);
            m_count = 1;
            m_radius = circle.m_radius;
            break;
        case POLYGON:
            final PolygonShape poly = (PolygonShape) shape;
            m_count = poly.m_count;
            m_radius = poly.m_radius;
            for (int i = 0; i < m_count; i++) {
                m_vertices[i].set(poly.m_vertices[i]);
            }
            break;
        case CHAIN:
            final ChainShape chain = (ChainShape) shape;
            assert (0 <= index && index < chain.m_count);
            m_buffer[0] = chain.m_vertices[index];
            if (index + 1 < chain.m_count) {
                m_buffer[1] = chain.m_vertices[index + 1];
            } else {
                m_buffer[1] = chain.m_vertices[0];
            }
            m_vertices[0].set(m_buffer[0]);
            m_vertices[1].set(m_buffer[1]);
            m_count = 2;
            m_radius = chain.m_radius;
            break;
        case EDGE:
            EdgeShape edge = (EdgeShape) shape;
            m_vertices[0].set(edge.m_vertex1);
            m_vertices[1].set(edge.m_vertex2);
            m_count = 2;
            m_radius = edge.m_radius;
            break;
        default:
            assert (false);
    }
}
