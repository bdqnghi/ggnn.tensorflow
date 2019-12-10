public void setMaterial(String name) {
    if (name == null)
        return;
    if (currentlyLoading != null) {
        Gdx.app.error("ModelTest", "Wait for the current model/material to be loaded.");
        return;
    }
    currentlyLoading = "data/g3d/materials/" + name + ".g3dj";
    loadingMaterial = true;
    if (!name.equals(currentMaterial))
        assets.load(currentlyLoading, Model.class);
    loading = true;
}
