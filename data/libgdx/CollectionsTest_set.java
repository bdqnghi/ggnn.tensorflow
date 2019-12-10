private void set(String fieldName, Object object, Object value) {
    try {
        ClassReflection.getField(object.getClass(), fieldName).set(object, value);
    } catch (Throwable ex) {
        throw new GdxRuntimeException(ex);
    }
}
