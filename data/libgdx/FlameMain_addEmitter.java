public void addEmitter(ParticleController emitter) {
    controllersData.add(new ControllerData(emitter));
    rebuildActiveControllers();
}
