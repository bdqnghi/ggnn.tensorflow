/**
 * Creates a new instance of the class represented by the supplied Class.
 */
static public <T> T newInstance(Class<T> c) throws ReflectionException {
    try {
        return c.newInstance();
    } catch (InstantiationException e) {
        throw new ReflectionException("Could not instantiate instance of class: " + c.getName(), e);
    } catch (IllegalAccessException e) {
        throw new ReflectionException("Could not instantiate instance of class: " + c.getName(), e);
    }
}
