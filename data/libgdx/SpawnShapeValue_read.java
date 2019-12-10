@Override
public void read(Json json, JsonValue jsonData) {
    super.read(json, jsonData);
    xOffsetValue = json.readValue("xOffsetValue", RangedNumericValue.class, jsonData);
    yOffsetValue = json.readValue("yOffsetValue", RangedNumericValue.class, jsonData);
    zOffsetValue = json.readValue("zOffsetValue", RangedNumericValue.class, jsonData);
}
