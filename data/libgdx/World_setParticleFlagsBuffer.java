/**
 * Set a buffer for particle data.
 *
 * @param buffer is a pointer to a block of memory.
 * @param size is the number of values in the block.
 */
public void setParticleFlagsBuffer(int[] buffer, int capacity) {
    m_particleSystem.setParticleFlagsBuffer(buffer, capacity);
}
