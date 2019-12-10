/**
 * Uses reflection to create a new instance of the given type.
 */
private Object newInstance(Class<?> clazz) {
    try {
        return ClassReflection.newInstance(clazz);
    } catch (Throwable ex) {
        throw new GdxRuntimeException(ex);
    }
}
