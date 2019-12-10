/**
 * Set this body to have fixed rotation. This causes the mass to be reset.
 *
 * @param flag
 */
public void setFixedRotation(boolean flag) {
    if (flag) {
        m_flags |= e_fixedRotationFlag;
    } else {
        m_flags &= ~e_fixedRotationFlag;
    }
    resetMassData();
}
