/**
 * Should this body be treated like a bullet for continuous collision detection?
 */
public final void setBullet(boolean flag) {
    if (flag) {
        m_flags |= e_bulletFlag;
    } else {
        m_flags &= ~e_bulletFlag;
    }
}
