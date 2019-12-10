@Override
public void write(Json json) {
    json.writeValue("alpha", alphaValue);
    json.writeValue("color", colorValue);
}
