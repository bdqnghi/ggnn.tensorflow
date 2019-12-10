public void clearManagedCaches() {
    Mesh.clearAllMeshes(app);
    Texture.clearAllTextures(app);
    Cubemap.clearAllCubemaps(app);
    ShaderProgram.clearAllShaderPrograms(app);
    FrameBuffer.clearAllFrameBuffers(app);
    logManagedCachesStatus();
}
