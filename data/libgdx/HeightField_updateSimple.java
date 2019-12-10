private void updateSimple() {
    for (int x = 0; x < width; ++x) {
        for (int y = 0; y < height; ++y) {
            setVertex(y * width + x, getVertexAt(vertex00, x, y));
        }
    }
    mesh.setVertices(vertices);
}
