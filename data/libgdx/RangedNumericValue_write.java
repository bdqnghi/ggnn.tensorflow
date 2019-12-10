@Override
public void write(Json json) {
    super.write(json);
    json.writeValue("lowMin", lowMin);
    json.writeValue("lowMax", lowMax);
}
