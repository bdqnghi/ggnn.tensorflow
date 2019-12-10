@Override
public void write(Json json) {
    super.write(json);
    json.writeValue("spawnWidthValue", spawnWidthValue);
    json.writeValue("spawnHeightValue", spawnHeightValue);
    json.writeValue("spawnDepthValue", spawnDepthValue);
    json.writeValue("edges", edges);
}
