/**
 * Returns the Class object associated with the class or interface with the supplied string name.
 */
static public Class forName(String name) throws ReflectionException {
    try {
        return Class.forName(name);
    } catch (ClassNotFoundException e) {
        throw new ReflectionException("Class not found: " + name, e);
    }
}
