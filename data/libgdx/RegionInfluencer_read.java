@Override
public void read(Json json, JsonValue jsonData) {
    regions.clear();
    regions.addAll(json.readValue("regions", Array.class, AspectTextureRegion.class, jsonData));
}
