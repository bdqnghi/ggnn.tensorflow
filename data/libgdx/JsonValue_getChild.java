/**
 * Finds the child with the specified name and returns its first child.
 * @return May be null.
 */
public JsonValue getChild(String name) {
    JsonValue child = get(name);
    return child == null ? null : child.child;
}
