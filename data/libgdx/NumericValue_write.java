@Override
public void write(Json json) {
    super.write(json);
    json.writeValue("value", value);
}
