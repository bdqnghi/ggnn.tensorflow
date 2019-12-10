/**
 * Returns the child with the specified name.
 * @throws IllegalArgumentException if the child was not found.
 */
public JsonValue require(String name) {
    JsonValue current = child;
    while (current != null && !current.name.equalsIgnoreCase(name)) current = current.next;
    if (current == null)
        throw new IllegalArgumentException("Child not found with name: " + name);
    return current;
}
