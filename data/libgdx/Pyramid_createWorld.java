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
        float a = 0.5f;
        PolygonShape shape = new PolygonShape();
        shape.setAsBox(a, a);
        Vector2 x = new Vector2(-7.0f, 0.75f);
        Vector2 y = new Vector2();
        Vector2 deltaX = new Vector2(0.5625f, 1.25f);
        Vector2 deltaY = new Vector2(1.125f, 0.0f);
        for (int i = 0; i < 20; i++) {
            y.set(x);
            for (int j = i; j < 20; j++) {
                BodyDef bd = new BodyDef();
                bd.type = BodyType.DynamicBody;
                bd.position.set(y);
                Body body = world.createBody(bd);
                body.createFixture(shape, 5.0f);
                y.add(deltaY);
            }
            x.add(deltaX);
        }
    }
}
