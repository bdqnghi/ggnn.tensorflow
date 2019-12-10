public ModelData parseModel(FileHandle handle) {
    JsonValue json = reader.parse(handle);
    ModelData model = new ModelData();
    JsonValue version = json.require("version");
    model.version[0] = version.getShort(0);
    model.version[1] = version.getShort(1);
    if (model.version[0] != VERSION_HI || model.version[1] != VERSION_LO)
        throw new GdxRuntimeException("Model version not supported");
    model.id = json.getString("id", "");
    parseMeshes(model, json);
    parseMaterials(model, json, handle.parent().path());
    parseNodes(model, json);
    parseAnimations(model, json);
    return model;
}
