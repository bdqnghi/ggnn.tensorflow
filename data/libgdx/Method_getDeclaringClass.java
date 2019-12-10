/**
 * Returns the Class object representing the class or interface that declares the method.
 */
public Class getDeclaringClass() {
    return method.getEnclosingType();
}
