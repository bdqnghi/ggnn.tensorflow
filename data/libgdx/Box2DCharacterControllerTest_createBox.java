Body createBox(BodyType type, float width, float height, float density) {
    BodyDef def = new BodyDef();
    def.type = type;
    Body box = world.createBody(def);
    PolygonShape poly = new PolygonShape();
    poly.setAsBox(width, height);
    box.createFixture(poly, density);
    poly.dispose();
    return box;
}
