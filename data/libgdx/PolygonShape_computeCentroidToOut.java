public final void computeCentroidToOut(final Vec2[] vs, final int count, final Vec2 out) {
    assert (count >= 3);
    out.set(0.0f, 0.0f);
    float area = 0.0f;
    // pRef is the reference point for forming triangles.
    // It's location doesn't change the result (except for rounding error).
    final Vec2 pRef = pool1;
    pRef.setZero();
    final Vec2 e1 = pool2;
    final Vec2 e2 = pool3;
    final float inv3 = 1.0f / 3.0f;
    for (int i = 0; i < count; ++i) {
        // Triangle vertices.
        final Vec2 p1 = pRef;
        final Vec2 p2 = vs[i];
        final Vec2 p3 = i + 1 < count ? vs[i + 1] : vs[0];
        e1.set(p2).subLocal(p1);
        e2.set(p3).subLocal(p1);
        final float D = Vec2.cross(e1, e2);
        final float triangleArea = 0.5f * D;
        area += triangleArea;
        // Area weighted centroid
        e1.set(p1).addLocal(p2).addLocal(p3).mulLocal(triangleArea * inv3);
        out.addLocal(e1);
    }
    // Centroid
    assert (area > Settings.EPSILON);
    out.mulLocal(1.0f / area);
}
