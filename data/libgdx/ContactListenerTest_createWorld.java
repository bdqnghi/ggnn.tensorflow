@Override
protected void createWorld(World world) {
    world.setContactListener(this);
    {
        BodyDef bd = new BodyDef();
        Body ground = world.createBody(bd);
        EdgeShape shape = new EdgeShape();
        shape.set(new Vector2(-20, 0), new Vector2(20, 0));
        ground.createFixture(shape, 0);
        shape.dispose();
    }
    {
        BodyDef bd = new BodyDef();
        Body ground = world.createBody(bd);
        EdgeShape shape = new EdgeShape();
        shape.setRadius(0);
        shape.set(new Vector2(-8, 1), new Vector2(-6, 1));
        ground.createFixture(shape, 0);
        shape.set(new Vector2(-6, 1), new Vector2(-4, 1));
        ground.createFixture(shape, 0);
        shape.set(new Vector2(-4, 1), new Vector2(-2, 1));
        ground.createFixture(shape, 0);
        shape.dispose();
    }
    {
        BodyDef bd = new BodyDef();
        Body ground = world.createBody(bd);
        PolygonShape shape = new PolygonShape();
        shape.setAsBox(1, 1, new Vector2(4, 3), 0);
        ground.createFixture(shape, 0);
        shape.setAsBox(1, 1, new Vector2(6, 3), 0);
        ground.createFixture(shape, 0);
        shape.setAsBox(1, 1, new Vector2(8, 3), 0);
        ground.createFixture(shape, 0);
        shape.dispose();
    }
    {
        BodyDef bd = new BodyDef();
        Body ground = world.createBody(bd);
        EdgeShape shape = new EdgeShape();
        float d = 2 * 2 * 0.005f;
        shape.setRadius(0);
        shape.set(new Vector2(-1 + d, 3), new Vector2(1 - d, 3));
        ground.createFixture(shape, 0);
        shape.set(new Vector2(1, 3 + d), new Vector2(1, 5 - d));
        ground.createFixture(shape, 0);
        shape.set(new Vector2(1 - d, 5), new Vector2(-1 + d, 5));
        ground.createFixture(shape, 0);
        shape.set(new Vector2(-1, 5 - d), new Vector2(-1, 3 + d));
        ground.createFixture(shape, 0);
        shape.dispose();
    }
    {
        BodyDef bd = new BodyDef();
        bd.position.set(-3, 20);
        bd.type = BodyType.DynamicBody;
        bd.fixedRotation = true;
        bd.allowSleep = false;
        Body body = world.createBody(bd);
        PolygonShape shape = new PolygonShape();
        shape.setAsBox(0.5f, 0.5f);
        FixtureDef fd = new FixtureDef();
        fd.shape = shape;
        fd.density = 20.0f;
        body.createFixture(fd);
        shape.dispose();
    }
    {
        BodyDef bd = new BodyDef();
        bd.position.set(-5, 25);
        bd.type = BodyType.DynamicBody;
        bd.fixedRotation = true;
        bd.allowSleep = false;
        Body body = world.createBody(bd);
        float angle = 0;
        float delta = (float) Math.PI / 3;
        Vector2[] vertices = new Vector2[6];
        for (int i = 0; i < 6; i++) {
            vertices[i] = new Vector2(0.5f * (float) Math.cos(angle), 0.5f * (float) Math.sin(angle));
            angle += delta;
        }
        PolygonShape shape = new PolygonShape();
        shape.set(vertices);
        FixtureDef fd = new FixtureDef();
        fd.shape = shape;
        fd.density = 20.0f;
        body.createFixture(fd);
        shape.dispose();
    }
    {
        BodyDef bd = new BodyDef();
        bd.position.set(3, 30);
        bd.type = BodyType.DynamicBody;
        bd.fixedRotation = true;
        bd.allowSleep = false;
        Body body = world.createBody(bd);
        CircleShape shape = new CircleShape();
        shape.setRadius(0.5f);
        FixtureDef fd = new FixtureDef();
        fd.shape = shape;
        fd.density = 20.0f;
        body.createFixture(fd);
        shape.dispose();
    }
}
