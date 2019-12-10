public void render() {
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    renderer.setColor(Color.RED);
    renderer.begin(ShapeType.Filled);
    for (int i = 0; i < points.size; i += 2) renderer.circle(points.get(i), points.get(i + 1), 4, 12);
    renderer.end();
    renderer.setColor(Color.WHITE);
    renderer.begin(ShapeType.Line);
    for (int i = 0; i < triangles.size; i += 3) {
        int p1 = triangles.get(i) * 2;
        int p2 = triangles.get(i + 1) * 2;
        int p3 = triangles.get(i + 2) * 2;
        // 
        renderer.triangle(// 
        points.get(p1), // 
        points.get(p1 + 1), // 
        points.get(p2), // 
        points.get(p2 + 1), points.get(p3), points.get(p3 + 1));
    }
    renderer.end();
}
