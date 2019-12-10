public void reloadTemplates() {
    setLoadedTemplates(editor.assetManager.getAll(type, new Array<T>()));
}
