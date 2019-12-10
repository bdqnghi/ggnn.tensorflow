private void updateSmooth() {
    for (int x = 0; x < width; ++x) {
        for (int y = 0; y < height; ++y) {
            VertexInfo v = getVertexAt(vertex00, x, y);
            getWeightedNormalAt(v.normal, x, y);
            setVertex(y * width + x, v);
        }
    }
    mesh.setVertices(vertices);
}
