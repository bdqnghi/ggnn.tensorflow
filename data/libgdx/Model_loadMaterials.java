private void loadMaterials(Iterable<ModelMaterial> modelMaterials, TextureProvider textureProvider) {
    for (ModelMaterial mtl : modelMaterials) {
        this.materials.add(convertMaterial(mtl, textureProvider));
    }
}
