private Body createEdge(BodyType type, float x1, float y1, float x2, float y2, float density) {
    BodyDef def = new BodyDef();
    def.type = type;
    Body box = world.createBody(def);
    EdgeShape poly = new EdgeShape();
    poly.set(new Vector2(0, 0), new Vector2(x2 - x1, y2 - y1));
    box.createFixture(poly, density);
    box.setTransform(x1, y1, 0);
    poly.dispose();
    return box;
}
