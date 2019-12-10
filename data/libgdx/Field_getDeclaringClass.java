/**
 * Returns the Class object representing the class or interface that declares the field.
 */
public Class getDeclaringClass() {
    return field.getEnclosingType().getClassOfType();
}
