/**
 * Returns a {@link Constructor} that represents the constructor for the supplied class which takes the supplied parameter
 * types.
 */
static public Constructor getDeclaredConstructor(Class c, Class... parameterTypes) throws ReflectionException {
    try {
        return new Constructor(c.getDeclaredConstructor(parameterTypes));
    } catch (SecurityException e) {
        throw new ReflectionException("Security violation while getting constructor for class: " + c.getName(), e);
    } catch (NoSuchMethodException e) {
        throw new ReflectionException("Constructor not found for class: " + c.getName(), e);
    }
}
