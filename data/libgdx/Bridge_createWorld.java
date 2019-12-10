@Override
protected void createWorld(World world) {
    Body ground;
    {
        BodyDef bd = new BodyDef();
        ground = world.createBody(bd);
        EdgeShape shape = new EdgeShape();
        shape.set(new Vector2(-40, 0), new Vector2(40.0f, 0));
        ground.createFixture(shape, 0);
        shape.dispose();
    }
    {
        PolygonShape shape = new PolygonShape();
        shape.setAsBox(0.5f, 0.125f);
        FixtureDef fd = new FixtureDef();
        fd.shape = shape;
        fd.density = 20.0f;
        fd.friction = 0.2f;
        RevoluteJointDef jd = new RevoluteJointDef();
        Body prevBody = ground;
        for (int i = 0; i < e_count; i++) {
            BodyDef bd = new BodyDef();
            bd.type = BodyType.DynamicBody;
            bd.position.set(-14.5f + 1.0f * i, 5.0f);
            Body body = world.createBody(bd);
            body.createFixture(fd);
            Vector2 anchor = new Vector2(-15.0f + 1.0f * i, 5.0f);
            jd.initialize(prevBody, body, anchor);
            world.createJoint(jd);
            prevBody = body;
        }
        Vector2 anchor = new Vector2(-15.0f + 1.0f * e_count, 5.0f);
        jd.initialize(prevBody, ground, anchor);
        world.createJoint(jd);
        shape.dispose();
    }
    for (int i = 0; i < 2; i++) {
        Vector2[] vertices = new Vector2[3];
        vertices[0] = new Vector2(-0.5f, 0);
        vertices[1] = new Vector2(0.5f, 0);
        vertices[2] = new Vector2(0, 1.5f);
        PolygonShape shape = new PolygonShape();
        shape.set(vertices);
        FixtureDef fd = new FixtureDef();
        fd.shape = shape;
        fd.density = 1.0f;
        BodyDef bd = new BodyDef();
        bd.type = BodyType.DynamicBody;
        bd.position.set(-8.0f + 8.0f * i, 12.0f);
        Body body = world.createBody(bd);
        body.createFixture(fd);
        shape.dispose();
    }
    for (int i = 0; i < 3; i++) {
        CircleShape shape = new CircleShape();
        shape.setRadius(0.5f);
        FixtureDef fd = new FixtureDef();
        fd.shape = shape;
        fd.density = 1.0f;
        BodyDef bd = new BodyDef();
        bd.type = BodyType.DynamicBody;
        bd.position.set(-6.0f + 6.0f * i, 10.0f);
        Body body = world.createBody(bd);
        body.createFixture(fd);
        shape.dispose();
    }
}
