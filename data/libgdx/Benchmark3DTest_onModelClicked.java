@Override
protected void onModelClicked(final String name) {
    if (name == null)
        return;
    currentlyLoading = "data/" + name;
    assets.load(currentlyLoading, Model.class);
    loading = true;
}
