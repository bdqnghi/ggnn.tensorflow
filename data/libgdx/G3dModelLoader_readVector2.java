private Vector2 readVector2(JsonValue vectorArray, float x, float y) {
    if (vectorArray == null)
        return new Vector2(x, y);
    else if (vectorArray.size == 2)
        return new Vector2(vectorArray.getFloat(0), vectorArray.getFloat(1));
    else
        throw new GdxRuntimeException("Expected Vector2 values <> than two.");
}
