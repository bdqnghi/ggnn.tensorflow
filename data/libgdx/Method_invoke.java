/**
 * Invokes the underlying method on the supplied object with the supplied parameters.
 */
public Object invoke(Object obj, Object... args) throws ReflectionException {
    try {
        return method.invoke(obj, args);
    } catch (IllegalArgumentException e) {
        throw new ReflectionException("Illegal argument(s) supplied to method: " + getName(), e);
    }
}
