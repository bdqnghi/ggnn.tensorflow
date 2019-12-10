@Override
public void onTemplateChecked(Model model, boolean isChecked) {
    // Update the shapes
    SpawnShapeValue shapeValue = null;
    Mesh mesh = model.meshes.get(0);
    weightMeshSpawnShapeValue.setMesh(mesh, model);
    meshSpawnShapeValue.setMesh(mesh, model);
    if (shapeCombo.getSelectedItem() == SPAWN_SHAPE_WEIGHT_MESH) {
        SpawnInfluencer influencer = (SpawnInfluencer) editor.getEmitter().findInfluencer(SpawnInfluencer.class);
        influencer.spawnShapeValue = weightMeshSpawnShapeValue;
    } else if (shapeCombo.getSelectedItem() == SPAWN_SHAPE_MESH) {
        SpawnInfluencer influencer = (SpawnInfluencer) editor.getEmitter().findInfluencer(SpawnInfluencer.class);
        influencer.spawnShapeValue = meshSpawnShapeValue;
    }
    editor.restart();
}
