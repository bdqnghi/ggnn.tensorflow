/**
 * Returns a {@link Field} that represents the specified declared field for the supplied class.
 */
static public Field getDeclaredField(Class c, String name) throws ReflectionException {
    try {
        return new Field(c.getDeclaredField(name));
    } catch (SecurityException e) {
        throw new ReflectionException("Security violation while getting field: " + name + ", for class: " + c.getName(), e);
    } catch (NoSuchFieldException e) {
        throw new ReflectionException("Field not found: " + name + ", for class: " + c.getName(), e);
    }
}
