/**
 * Is this body treated like a bullet for continuous collision detection?
 */
public final boolean isBullet() {
    return (m_flags & e_bulletFlag) == e_bulletFlag;
}
