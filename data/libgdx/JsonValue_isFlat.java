static private boolean isFlat(JsonValue object) {
    for (JsonValue child = object.child; child != null; child = child.next) if (child.isObject() || child.isArray())
        return false;
    return true;
}
