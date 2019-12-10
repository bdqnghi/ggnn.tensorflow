@Override
public boolean keyDown(int keyCode) {
    if (keyCode == Input.Keys.COMMA) {
        if (m_bullet != null) {
            world.destroyBody(m_bullet);
            m_bullet = null;
        }
        {
            CircleShape shape = new CircleShape();
            shape.setRadius(0.25f);
            FixtureDef fd = new FixtureDef();
            fd.shape = shape;
            fd.density = 20.0f;
            fd.restitution = 0.05f;
            BodyDef bd = new BodyDef();
            bd.type = BodyType.DynamicBody;
            bd.bullet = true;
            bd.position.set(-31, 5);
            m_bullet = world.createBody(bd);
            m_bullet.createFixture(fd);
            m_bullet.setLinearVelocity(new Vector2(400, 0));
        }
    }
    return false;
}
