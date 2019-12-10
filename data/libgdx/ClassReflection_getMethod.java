/**
 * Returns a {@link Method} that represents the public member method for the supplied class which takes the supplied parameter
 * types.
 */
static public Method getMethod(Class c, String name, Class... parameterTypes) throws ReflectionException {
    try {
        return new Method(c.getMethod(name, parameterTypes));
    } catch (SecurityException e) {
        throw new ReflectionException("Security violation while getting method: " + name + ", for class: " + c.getName(), e);
    } catch (NoSuchMethodException e) {
        throw new ReflectionException("Method not found: " + name + ", for class: " + c.getName(), e);
    }
}
