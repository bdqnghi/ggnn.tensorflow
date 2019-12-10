/**
 * Returns a Class object that identifies the declared type for the field.
 */
public Class getType() {
    return field.getType().getClassOfType();
}
