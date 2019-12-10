/**
 * Uses the constructor to create and initialize a new instance of the constructor's declaring class, with the supplied
 * initialization parameters.
 */
public Object newInstance(Object... args) throws ReflectionException {
    try {
        return constructor.newInstance(args);
    } catch (IllegalArgumentException e) {
        throw new ReflectionException("Illegal argument(s) supplied to constructor for class: " + getDeclaringClass().getName(), e);
    } catch (InstantiationException e) {
        throw new ReflectionException("Could not instantiate instance of class: " + getDeclaringClass().getName(), e);
    } catch (IllegalAccessException e) {
        throw new ReflectionException("Could not instantiate instance of class: " + getDeclaringClass().getName(), e);
    } catch (InvocationTargetException e) {
        throw new ReflectionException("Exception occurred in constructor for class: " + getDeclaringClass().getName(), e);
    }
}
