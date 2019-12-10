/**
 * Finds the child with the specified index and returns it as an int.
 * @throws IllegalArgumentException if the child was not found.
 */
public int getInt(int index) {
    JsonValue child = get(index);
    if (child == null)
        throw new IllegalArgumentException("Indexed value not found: " + name);
    return child.asInt();
}
