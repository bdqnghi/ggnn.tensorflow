public ParticleController getEmitter() {
    return effectPanel.editIndex >= 0 ? controllersData.get(effectPanel.editIndex).controller : null;
}
