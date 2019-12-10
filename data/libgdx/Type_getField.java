/**
 * @param name the name of the field
 * @return the public field of this type or one of its super interfaces with the given name or null. See
 *         {@link Class#getField(String)}.
 */
public Field getField(String name) {
    for (Field f : getFields()) {
        if (f.name.equals(name))
            return f;
    }
    return null;
}
