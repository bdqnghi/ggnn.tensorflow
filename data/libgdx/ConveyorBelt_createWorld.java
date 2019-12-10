@Override
protected void createWorld(World world) {
    world.setContactListener(this);
    // Ground
    {
        BodyDef bodyDef = new BodyDef();
        groundBody = world.createBody(bodyDef);
        EdgeShape shape = new EdgeShape();
        shape.set(new Vector2(-20.0f, 0.0f), new Vector2(20.0f, 0.0f));
        groundBody.createFixture(shape, 0.0f);
    }
    // Platform
    {
        BodyDef bd = new BodyDef();
        bd.position.set(-5.0f, 5.0f);
        Body body = world.createBody(bd);
        PolygonShape shape = new PolygonShape();
        shape.setAsBox(10.0f, 0.5f);
        FixtureDef fd = new FixtureDef();
        fd.shape = shape;
        fd.friction = 0.8f;
        m_platform = body.createFixture(fd);
    }
    // Boxes
    for (int i = 0; i < 5; ++i) {
        BodyDef bd = new BodyDef();
        bd.type = BodyType.DynamicBody;
        bd.position.set(-10.0f + 2.0f * i, 7.0f);
        Body body = world.createBody(bd);
        PolygonShape shape = new PolygonShape();
        shape.setAsBox(0.5f, 0.5f);
        body.createFixture(shape, 20.0f);
    }
}
