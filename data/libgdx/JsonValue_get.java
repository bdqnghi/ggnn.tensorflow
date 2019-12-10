/**
 * Returns the child with the specified name.
 * @return May be null.
 */
public JsonValue get(String name) {
    JsonValue current = child;
    while (current != null && !current.name.equalsIgnoreCase(name)) current = current.next;
    return current;
}
