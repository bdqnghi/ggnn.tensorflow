public final Shape clone() {
    PolygonShape shape = new PolygonShape();
    shape.m_centroid.set(this.m_centroid);
    for (int i = 0; i < shape.m_normals.length; i++) {
        shape.m_normals[i].set(m_normals[i]);
        shape.m_vertices[i].set(m_vertices[i]);
    }
    shape.setRadius(this.getRadius());
    shape.m_count = this.m_count;
    return shape;
}
