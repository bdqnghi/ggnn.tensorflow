protected T newObject() {
    try {
        return (T) constructor.newInstance((Object[]) null);
    } catch (Exception ex) {
        throw new GdxRuntimeException("Unable to create new instance: " + constructor.getDeclaringClass().getName(), ex);
    }
}
