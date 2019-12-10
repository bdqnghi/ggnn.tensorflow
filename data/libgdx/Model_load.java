private void load(ModelData modelData, TextureProvider textureProvider) {
    loadMeshes(modelData.meshes);
    loadMaterials(modelData.materials, textureProvider);
    loadNodes(modelData.nodes);
    loadAnimations(modelData.animations);
    calculateTransforms();
}
