@Override
public void read(Json json, JsonValue jsonData) {
    super.read(json, jsonData);
    continuous = json.readValue("continous", boolean.class, jsonData);
    emissionValue = json.readValue("emission", ScaledNumericValue.class, jsonData);
    delayValue = json.readValue("delay", RangedNumericValue.class, jsonData);
    durationValue = json.readValue("duration", RangedNumericValue.class, jsonData);
    lifeValue = json.readValue("life", ScaledNumericValue.class, jsonData);
    lifeOffsetValue = json.readValue("lifeOffset", ScaledNumericValue.class, jsonData);
}
