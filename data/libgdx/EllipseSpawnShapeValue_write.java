@Override
public void write(Json json) {
    super.write(json);
    json.writeValue("side", side);
}
