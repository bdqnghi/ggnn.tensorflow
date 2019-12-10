@Override
protected void createWorld(World world) {
    {
        BodyDef bd = new BodyDef();
        Body ground = world.createBody(bd);
        EdgeShape shape = new EdgeShape();
        shape.set(new Vector2(-40, 0), new Vector2(40, 0));
        ground.createFixture(shape, 0.0f);
        shape.set(new Vector2(20, 0), new Vector2(20, 20));
        ground.createFixture(shape, 0);
        shape.dispose();
    }
    float[] xs = { 0, -10, -5, 5, 10 };
    for (int j = 0; j < e_columnCount; j++) {
        PolygonShape shape = new PolygonShape();
        shape.setAsBox(0.5f, 0.5f);
        FixtureDef fd = new FixtureDef();
        fd.shape = shape;
        fd.density = 1.0f;
        fd.friction = 0.3f;
        for (int i = 0; i < e_rowCount; i++) {
            BodyDef bd = new BodyDef();
            bd.type = BodyType.DynamicBody;
            int n = j * e_rowCount + i;
            m_indices[n] = n;
            float x = 0;
            bd.position.set(xs[j] + x, 0.752f + 1.54f * i);
            Body body = world.createBody(bd);
            body.setUserData(n);
            m_bodies[n] = body;
            body.createFixture(fd);
        }
        shape.dispose();
    }
    m_bullet = null;
}
