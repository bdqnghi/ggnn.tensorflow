@Override
protected void createWorld(World world) {
    {
        BodyDef bd = new BodyDef();
        Body ground = world.createBody(bd);
        EdgeShape shape = new EdgeShape();
        shape.set(new Vector2(-40, 0), new Vector2(40, 0));
        ground.createFixture(shape, 0);
        shape.dispose();
    }
    {
        CircleShape shape = new CircleShape();
        shape.setRadius(1.0f);
        for (int i = 0; i < e_count; i++) {
            BodyDef bd = new BodyDef();
            bd.type = BodyType.DynamicBody;
            bd.position.set(0, 4.0f + 3.0f * i);
            Body body = world.createBody(bd);
            body.createFixture(shape, 1.0f);
        }
        shape.dispose();
    }
}
