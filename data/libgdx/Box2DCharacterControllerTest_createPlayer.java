private Body createPlayer() {
    BodyDef def = new BodyDef();
    def.type = BodyType.DynamicBody;
    Body box = world.createBody(def);
    PolygonShape poly = new PolygonShape();
    poly.setAsBox(0.45f, 1.4f);
    playerPhysicsFixture = box.createFixture(poly, 1);
    poly.dispose();
    CircleShape circle = new CircleShape();
    circle.setRadius(0.45f);
    circle.setPosition(new Vector2(0, -1.4f));
    playerSensorFixture = box.createFixture(circle, 0);
    circle.dispose();
    box.setBullet(true);
    return box;
}
