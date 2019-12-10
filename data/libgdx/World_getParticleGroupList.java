/**
 * Get the world particle group list. With the returned group, use ParticleGroup::GetNext to get
 * the next group in the world list. A NULL group indicates the end of the list.
 *
 * @return the head of the world particle group list.
 */
public ParticleGroup[] getParticleGroupList() {
    return m_particleSystem.getParticleGroupList();
}
