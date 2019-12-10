void triangulate() {
    // seed = 4139368480425561099l;
    // seed = 6559652580366669361l;
    MathUtils.random.setSeed(seed);
    int pointCount = 100;
    points.clear();
    for (int i = 0; i < pointCount; i++) {
        float value;
        do {
            value = MathUtils.random(10, 400);
        } while (points.contains(value));
        points.add(value);
        do {
            value = MathUtils.random(10, 400);
        } while (points.contains(value));
        points.add(value);
    }
    points.add(Gdx.input.getX());
    points.add(Gdx.graphics.getHeight() - Gdx.input.getY());
    triangles = trianglulator.computeTriangles(points, false);
}
