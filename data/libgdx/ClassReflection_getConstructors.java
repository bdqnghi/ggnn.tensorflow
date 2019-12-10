/**
 * Returns an array of {@link Constructor} containing the public constructors of the class represented by the supplied Class.
 */
static public Constructor[] getConstructors(Class c) {
    java.lang.reflect.Constructor[] constructors = c.getConstructors();
    Constructor[] result = new Constructor[constructors.length];
    for (int i = 0, j = constructors.length; i < j; i++) {
        result[i] = new Constructor(constructors[i]);
    }
    return result;
}
