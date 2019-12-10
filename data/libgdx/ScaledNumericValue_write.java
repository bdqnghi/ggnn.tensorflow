@Override
public void write(Json json) {
    super.write(json);
    json.writeValue("highMin", highMin);
    json.writeValue("highMax", highMax);
    json.writeValue("relative", relative);
    json.writeValue("scaling", scaling);
    json.writeValue("timeline", timeline);
}
