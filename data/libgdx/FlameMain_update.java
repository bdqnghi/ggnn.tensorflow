private void update() {
    worldCamera.fieldOfView = fovValue.getValue();
    worldCamera.update();
    cameraInputController.update();
    if (isUpdate) {
        particleSystem.update();
        // Update ui
        stringBuilder.delete(0, stringBuilder.length);
        stringBuilder.append("Point Sprites : ").append(pointSpriteBatch.getBufferedCount());
        pointCountLabel.setText(stringBuilder);
        stringBuilder.delete(0, stringBuilder.length);
        stringBuilder.append("Billboards : ").append(billboardBatch.getBufferedCount());
        billboardCountLabel.setText(stringBuilder);
        stringBuilder.delete(0, stringBuilder.length);
        stringBuilder.append("Model Instances : ").append(modelInstanceParticleBatch.getBufferedCount());
        modelInstanceCountLabel.setText(stringBuilder);
    }
    stringBuilder.delete(0, stringBuilder.length);
    stringBuilder.append("FPS : ").append(Gdx.graphics.getFramesPerSecond());
    fpsLabel.setText(stringBuilder);
    ui.act(Gdx.graphics.getDeltaTime());
}
