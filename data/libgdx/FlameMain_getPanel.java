protected JPanel getPanel(ParticleBatch renderer) {
    if (renderer instanceof PointSpriteParticleBatch) {
        return new EmptyPanel(this, "Point Sprite Batch", "It renders particles as point sprites.");
    }
    if (renderer instanceof BillboardParticleBatch) {
        return new BillboardBatchPanel(this, (BillboardParticleBatch) renderer);
    } else if (renderer instanceof ModelInstanceParticleBatch) {
        return new EmptyPanel(this, "Model Instance Batch", "It renders particles as model instances.");
    }
    return null;
}
