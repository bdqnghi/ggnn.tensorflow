@Override
protected void onModelClicked(final String name) {
    if (name == null)
        return;
    if (currentlyLoading != null) {
        Gdx.app.error("ModelTest", "Wait for the current model/material to be loaded.");
        return;
    }
    currentlyLoading = "data/" + name;
    loadingMaterial = false;
    if (!name.equals(currentModel))
        assets.load(currentlyLoading, Model.class);
    loading = true;
}
