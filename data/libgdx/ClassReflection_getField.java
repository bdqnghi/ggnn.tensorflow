/**
 * Returns a {@link Field} that represents the specified public member field for the supplied class.
 */
static public Field getField(Class c, String name) throws ReflectionException {
    try {
        return new Field(c.getField(name));
    } catch (SecurityException e) {
        throw new ReflectionException("Security violation while getting field: " + name + ", for class: " + c.getName(), e);
    } catch (NoSuchFieldException e) {
        throw new ReflectionException("Field not found: " + name + ", for class: " + c.getName(), e);
    }
}
