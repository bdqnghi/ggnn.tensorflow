protected String getTemplateName(T template, int index) {
    String name = editor.assetManager.getAssetFileName(template);
    return name == null ? "template " + index : name;
}
