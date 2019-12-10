/**
 * Finds the child with the specified index and returns it as a char.
 * @throws IllegalArgumentException if the child was not found.
 */
public char getChar(int index) {
    JsonValue child = get(index);
    if (child == null)
        throw new IllegalArgumentException("Indexed value not found: " + name);
    return child.asChar();
}
