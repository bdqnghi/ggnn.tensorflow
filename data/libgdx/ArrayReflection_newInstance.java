/**
 * Creates a new array with the specified component type and length.
 */
static public Object newInstance(Class c, int size) {
    return java.lang.reflect.Array.newInstance(c, size);
}
