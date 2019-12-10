/**
 * Ensure the batch can contain the passed in amount of particles
 */
public void ensureCapacity(int capacity) {
    if (currentCapacity >= capacity)
        return;
    sorter.ensureCapacity(capacity);
    allocParticlesData(capacity);
    currentCapacity = capacity;
}
