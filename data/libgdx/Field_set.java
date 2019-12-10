/**
 * Sets the value of the field on the supplied object.
 */
public void set(Object obj, Object value) throws ReflectionException {
    try {
        field.set(obj, value);
    } catch (IllegalArgumentException e) {
        throw new ReflectionException("Could not set " + getDeclaringClass() + "#" + getName() + ": " + e.getMessage(), e);
    } catch (IllegalAccessException e) {
        throw new ReflectionException("Illegal access to field " + getName() + ": " + e.getMessage(), e);
    }
}
