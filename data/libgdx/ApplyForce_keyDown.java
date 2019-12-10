public boolean keyDown(int keyCode) {
    if (keyCode == Keys.W) {
        Vector2 f = m_body.getWorldVector(tmp.set(0, -200));
        Vector2 p = m_body.getWorldPoint(tmp.set(0, 2));
        m_body.applyForce(f, p, true);
    }
    if (keyCode == Keys.A)
        m_body.applyTorque(50, true);
    if (keyCode == Keys.D)
        m_body.applyTorque(-50, true);
    return false;
}
