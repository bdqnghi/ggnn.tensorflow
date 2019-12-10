public void setSorter(ParticleSorter sorter) {
    this.sorter = sorter;
    sorter.setCamera(camera);
    sorter.ensureCapacity(currentCapacity);
}
