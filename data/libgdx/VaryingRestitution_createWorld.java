@Override
protected void createWorld(World world) {
    {
        BodyDef bd = new BodyDef();
        Body ground = world.createBody(bd);
        EdgeShape shape = new EdgeShape();
        shape.set(new Vector2(-40, 0), new Vector2(40, 0));
        ground.createFixture(shape, 0.0f);
        shape.dispose();
    }
    {
        CircleShape shape = new CircleShape();
        shape.setRadius(1);
        FixtureDef fd = new FixtureDef();
        fd.shape = shape;
        fd.density = 1.0f;
        float[] restitution = { 0, 0.1f, 0.3f, 0.5f, 0.75f, 0.9f, 1.0f };
        for (int i = 0; i < restitution.length; i++) {
            BodyDef bd = new BodyDef();
            bd.type = BodyType.DynamicBody;
            bd.position.set(-10.0f + 3.0f * i, 20.0f);
            Body body = world.createBody(bd);
            fd.restitution = restitution[i];
            body.createFixture(fd);
        }
        shape.dispose();
    }
}
