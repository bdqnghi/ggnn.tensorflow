protected void setVertex(int index, VertexInfo info) {
    index *= stride;
    if (posPos >= 0) {
        vertices[index + posPos + 0] = info.position.x;
        vertices[index + posPos + 1] = info.position.y;
        vertices[index + posPos + 2] = info.position.z;
    }
    if (norPos >= 0) {
        vertices[index + norPos + 0] = info.normal.x;
        vertices[index + norPos + 1] = info.normal.y;
        vertices[index + norPos + 2] = info.normal.z;
    }
    if (uvPos >= 0) {
        vertices[index + uvPos + 0] = info.uv.x;
        vertices[index + uvPos + 1] = info.uv.y;
    }
    if (colPos >= 0) {
        vertices[index + colPos + 0] = info.color.r;
        vertices[index + colPos + 1] = info.color.g;
        vertices[index + colPos + 2] = info.color.b;
        vertices[index + colPos + 3] = info.color.a;
    }
}
