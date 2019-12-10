@Override
public boolean keyDown(int keyCode) {
    if (keyCode == Keys.D)
        m_platform.setType(BodyType.DynamicBody);
    if (keyCode == Keys.S)
        m_platform.setType(BodyType.StaticBody);
    if (keyCode == Keys.K) {
        m_platform.setType(BodyType.KinematicBody);
        m_platform.setLinearVelocity(tmp.set(-m_speed, 0));
        m_platform.setAngularVelocity(0);
    }
    return false;
}
