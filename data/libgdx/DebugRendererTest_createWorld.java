@Override
protected void createWorld(World world) {
    {
        EdgeShape shape = new EdgeShape();
        shape.set(new Vector2(-40.0f, 0), new Vector2(40, 0));
        FixtureDef fd = new FixtureDef();
        fd.shape = shape;
        fd.friction = 0.3f;
        BodyDef bd = new BodyDef();
        Body ground = world.createBody(bd);
        ground.createFixture(fd);
        shape.dispose();
    }
    {
        PolygonShape shape = new PolygonShape();
        shape.setAsBox(1, 2f);
        BodyDef def = new BodyDef();
        def.position.y = 10;
        def.angle = (float) Math.toRadians(90);
        def.type = BodyType.DynamicBody;
        Body body = world.createBody(def);
        body.createFixture(shape, 1);
        def = new BodyDef();
        def.position.x = 10;
        def.position.y = 10;
        def.angle = 0;
        def.type = BodyType.DynamicBody;
        body = world.createBody(def);
        body.createFixture(shape, 1);
        shape.dispose();
    }
}
