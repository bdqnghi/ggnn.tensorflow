/**
 * Returns the value of the field on the supplied object.
 */
public Object get(Object obj) throws ReflectionException {
    try {
        return field.get(obj);
    } catch (IllegalArgumentException e) {
        throw new ReflectionException("Could not get " + getDeclaringClass() + "#" + getName() + ": " + e.getMessage(), e);
    } catch (IllegalAccessException e) {
        throw new ReflectionException("Illegal access to field " + getName() + ": " + e.getMessage(), e);
    }
}
