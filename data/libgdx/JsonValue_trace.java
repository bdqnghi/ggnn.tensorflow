/**
 * Returns a human readable string representing the path from the root of the JSON object graph to this value.
 */
public String trace() {
    if (parent == null) {
        if (type == ValueType.array)
            return "[]";
        if (type == ValueType.object)
            return "{}";
        return "";
    }
    String trace;
    if (parent.type == ValueType.array) {
        trace = "[]";
        int i = 0;
        for (JsonValue child = parent.child; child != null; child = child.next, i++) {
            if (child == this) {
                trace = "[" + i + "]";
                break;
            }
        }
    } else if (name.indexOf('.') != -1)
        trace = ".\"" + name.replace("\"", "\\\"") + "\"";
    else
        trace = '.' + name;
    return parent.trace() + trace;
}
