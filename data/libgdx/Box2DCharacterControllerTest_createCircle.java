Body createCircle(BodyType type, float radius, float density) {
    BodyDef def = new BodyDef();
    def.type = type;
    Body box = world.createBody(def);
    CircleShape poly = new CircleShape();
    poly.setRadius(radius);
    box.createFixture(poly, density);
    poly.dispose();
    return box;
}
