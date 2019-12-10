/**
 * Returns an array of {@link Method} containing the methods declared by the class represented by the supplied Class.
 */
static public Method[] getDeclaredMethods(Class c) {
    java.lang.reflect.Method[] methods = c.getDeclaredMethods();
    Method[] result = new Method[methods.length];
    for (int i = 0, j = methods.length; i < j; i++) {
        result[i] = new Method(methods[i]);
    }
    return result;
}
