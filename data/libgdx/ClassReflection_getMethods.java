/**
 * Returns an array of {@link Method} containing the public member methods of the class represented by the supplied Class.
 */
static public Method[] getMethods(Class c) {
    java.lang.reflect.Method[] methods = c.getMethods();
    Method[] result = new Method[methods.length];
    for (int i = 0, j = methods.length; i < j; i++) {
        result[i] = new Method(methods[i]);
    }
    return result;
}
