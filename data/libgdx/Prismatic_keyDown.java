public boolean keyDown(int keyCode) {
    if (keyCode == Keys.L)
        m_joint.enableLimit(!m_joint.isLimitEnabled());
    if (keyCode == Keys.M)
        m_joint.enableMotor(!m_joint.isMotorEnabled());
    if (keyCode == Keys.S)
        m_joint.setMotorSpeed(-m_joint.getMotorSpeed());
    return false;
}
