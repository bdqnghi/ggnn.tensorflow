private void addEmitter(float[] colors, Texture particleTexture, Vector3 translation, Vector3 actionAxis, float actionRotation) {
    ParticleController controller = createBillboardController(colors, particleTexture);
    controller.init();
    controller.start();
    emitters.add(controller);
    controller.translate(translation);
    ui.addAction(new RotationAction(controller, actionAxis, actionRotation));
}
