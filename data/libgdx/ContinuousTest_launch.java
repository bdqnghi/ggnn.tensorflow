private void launch() {
    m_body.setTransform(new Vector2(0, 20), 0);
    m_angularVelocity = (float) Math.random() * 100 - 50;
    m_body.setLinearVelocity(new Vector2(0, -100));
    m_body.setAngularVelocity(m_angularVelocity);
}
