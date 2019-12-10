@Override
public void write(Json json) {
    super.write(json);
    json.writeValue("colors", colors);
    json.writeValue("timeline", timeline);
}
