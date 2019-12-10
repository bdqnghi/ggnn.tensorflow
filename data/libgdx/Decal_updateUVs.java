/**
 * Re-applies the uv coordinates from the material's texture region to the uv components of the vertices array
 */
protected void updateUVs() {
    TextureRegion tr = material.textureRegion;
    // left top
    vertices[U1] = tr.getU();
    vertices[V1] = tr.getV();
    // right top
    vertices[U2] = tr.getU2();
    vertices[V2] = tr.getV();
    // left bot
    vertices[U3] = tr.getU();
    vertices[V3] = tr.getV2();
    // right bot
    vertices[U4] = tr.getU2();
    vertices[V4] = tr.getV2();
}
