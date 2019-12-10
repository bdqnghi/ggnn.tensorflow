@Override
public void write(Json json) {
    super.write(json);
    json.writeValue("xOffsetValue", xOffsetValue);
    json.writeValue("yOffsetValue", yOffsetValue);
    json.writeValue("zOffsetValue", zOffsetValue);
}
