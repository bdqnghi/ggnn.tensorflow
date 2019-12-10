/**
 */
public void end() {
    if (bufferedParticlesCount > 0) {
        ensureCapacity(bufferedParticlesCount);
        flush(sorter.sort(renderData));
    }
}
