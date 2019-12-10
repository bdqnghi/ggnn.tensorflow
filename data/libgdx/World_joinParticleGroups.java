/**
 * Join two particle groups.
 *
 * @param the first group. Expands to encompass the second group.
 * @param the second group. It is destroyed.
 * @warning This function is locked during callbacks.
 */
public void joinParticleGroups(ParticleGroup groupA, ParticleGroup groupB) {
    assert (isLocked() == false);
    if (isLocked()) {
        return;
    }
    m_particleSystem.joinParticleGroups(groupA, groupB);
}
