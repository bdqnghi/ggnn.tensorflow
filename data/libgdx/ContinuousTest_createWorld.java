@Override
protected void createWorld(World world) {
    {
        BodyDef bd = new BodyDef();
        bd.position.set(0, 0);
        Body body = world.createBody(bd);
        EdgeShape shape = new EdgeShape();
        shape.set(new Vector2(-10, 0), new Vector2(10, 0));
        body.createFixture(shape, 0);
        shape.dispose();
        PolygonShape poly = new PolygonShape();
        poly.setAsBox(0.2f, 1.0f, new Vector2(0.5f, 1.0f), 0);
        body.createFixture(poly, 0);
        poly.dispose();
    }
    {
        BodyDef bd = new BodyDef();
        bd.type = BodyType.DynamicBody;
        bd.position.set(0, 20);
        PolygonShape shape = new PolygonShape();
        shape.setAsBox(2, 0.1f);
        m_body = world.createBody(bd);
        m_body.createFixture(shape, 1);
        m_angularVelocity = 33.468121f;
        m_body.setLinearVelocity(new Vector2(0, -100));
        m_body.setAngularVelocity(m_angularVelocity);
        shape.dispose();
    }
}
