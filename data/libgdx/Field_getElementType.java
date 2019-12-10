/**
 * If the type of the field is parameterized, returns the Class object representing the parameter type at the specified index,
 * null otherwise.
 */
public Class getElementType(int index) {
    Type elementType = field.getElementType(index);
    return elementType != null ? elementType.getClassOfType() : null;
}
