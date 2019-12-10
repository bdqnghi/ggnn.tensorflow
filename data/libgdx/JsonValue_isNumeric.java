static private boolean isNumeric(JsonValue object) {
    for (JsonValue child = object.child; child != null; child = child.next) if (!child.isNumber())
        return false;
    return true;
}
