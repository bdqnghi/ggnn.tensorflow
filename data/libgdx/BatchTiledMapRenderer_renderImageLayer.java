@Override
public void renderImageLayer(TiledMapImageLayer layer) {
    final Color batchColor = batch.getColor();
    final float color = Color.toFloatBits(batchColor.r, batchColor.g, batchColor.b, batchColor.a * layer.getOpacity());
    final float[] vertices = this.vertices;
    TextureRegion region = layer.getTextureRegion();
    if (region == null) {
        return;
    }
    final float x = layer.getX();
    final float y = layer.getY();
    final float x1 = x * unitScale;
    final float y1 = y * unitScale;
    final float x2 = x1 + region.getRegionWidth() * unitScale;
    final float y2 = y1 + region.getRegionHeight() * unitScale;
    imageBounds.set(x1, y1, x2 - x1, y2 - y1);
    if (viewBounds.contains(imageBounds) || viewBounds.overlaps(imageBounds)) {
        final float u1 = region.getU();
        final float v1 = region.getV2();
        final float u2 = region.getU2();
        final float v2 = region.getV();
        vertices[X1] = x1;
        vertices[Y1] = y1;
        vertices[C1] = color;
        vertices[U1] = u1;
        vertices[V1] = v1;
        vertices[X2] = x1;
        vertices[Y2] = y2;
        vertices[C2] = color;
        vertices[U2] = u1;
        vertices[V2] = v2;
        vertices[X3] = x2;
        vertices[Y3] = y2;
        vertices[C3] = color;
        vertices[U3] = u2;
        vertices[V3] = v2;
        vertices[X4] = x2;
        vertices[Y4] = y1;
        vertices[C4] = color;
        vertices[U4] = u2;
        vertices[V4] = v1;
        batch.draw(region.getTexture(), vertices, 0, NUM_VERTICES);
    }
}
