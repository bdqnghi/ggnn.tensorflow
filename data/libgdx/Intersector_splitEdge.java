private static void splitEdge(float[] vertices, int s, int e, int stride, Plane plane, float[] split, int offset) {
    float t = Intersector.intersectLinePlane(vertices[s], vertices[s + 1], vertices[s + 2], vertices[e], vertices[e + 1], vertices[e + 2], plane, intersection);
    split[offset + 0] = intersection.x;
    split[offset + 1] = intersection.y;
    split[offset + 2] = intersection.z;
    for (int i = 3; i < stride; i++) {
        float a = vertices[s + i];
        float b = vertices[e + i];
        split[offset + i] = a + t * (b - a);
    }
}
