private Color parseColor(JsonValue colorArray) {
    if (colorArray.size >= 3)
        return new Color(colorArray.getFloat(0), colorArray.getFloat(1), colorArray.getFloat(2), 1.0f);
    else
        throw new GdxRuntimeException("Expected Color values <> than three.");
}
