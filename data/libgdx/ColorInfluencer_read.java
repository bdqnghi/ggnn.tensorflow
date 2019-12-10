@Override
public void read(Json json, JsonValue jsonData) {
    alphaValue = json.readValue("alpha", ScaledNumericValue.class, jsonData);
    colorValue = json.readValue("color", GradientColorValue.class, jsonData);
}
