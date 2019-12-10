@Override
protected void onLoaded() {
    Texture particleTexture = assets.get(DEFAULT_PARTICLE);
    billboardParticleBatch.setTexture(assets.get(DEFAULT_PARTICLE, Texture.class));
    // X
    addEmitter(new float[] { 1, 0.12156863f, 0.047058824f }, particleTexture, tmpVector.set(5, 5, 0), Vector3.X, 360);
    // Y
    addEmitter(new float[] { 0.12156863f, 1, 0.047058824f }, particleTexture, tmpVector.set(0, 5, -5), Vector3.Y, -360);
    // Z
    addEmitter(new float[] { 0.12156863f, 0.047058824f, 1 }, particleTexture, tmpVector.set(0, 5, 5), Vector3.Z, -360);
    setupUI();
}
