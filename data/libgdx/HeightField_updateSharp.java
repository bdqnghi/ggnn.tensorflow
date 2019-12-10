private void updateSharp() {
    final int w = width - 1;
    final int h = height - 1;
    for (int y = 0; y < h; ++y) {
        for (int x = 0; x < w; ++x) {
            final int c00 = (y * 2 * w + x * 2);
            final int c10 = c00 + 1;
            final int c01 = c00 + w * 2;
            final int c11 = c10 + w * 2;
            VertexInfo v00 = getVertexAt(vertex00, x, y);
            VertexInfo v10 = getVertexAt(vertex10, x + 1, y);
            VertexInfo v01 = getVertexAt(vertex01, x, y + 1);
            VertexInfo v11 = getVertexAt(vertex11, x + 1, y + 1);
            v01.normal.set(v01.position).sub(v00.position).nor().crs(tmpV1.set(v11.position).sub(v01.position).nor());
            v10.normal.set(v10.position).sub(v11.position).nor().crs(tmpV1.set(v00.position).sub(v10.position).nor());
            v00.normal.set(v01.normal).lerp(v10.normal, .5f);
            v11.normal.set(v00.normal);
            setVertex(c00, v00);
            setVertex(c10, v10);
            setVertex(c01, v01);
            setVertex(c11, v11);
        }
    }
    mesh.setVertices(vertices);
}
