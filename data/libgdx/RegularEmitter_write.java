@Override
public void write(Json json) {
    super.write(json);
    json.writeValue("continous", continuous);
    json.writeValue("emission", emissionValue);
    json.writeValue("delay", delayValue);
    json.writeValue("duration", durationValue);
    json.writeValue("life", lifeValue);
    json.writeValue("lifeOffset", lifeOffsetValue);
}
