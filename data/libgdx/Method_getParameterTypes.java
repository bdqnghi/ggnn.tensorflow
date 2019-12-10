/**
 * Returns an array of Class objects that represent the formal parameter types, in declaration order, of the method.
 */
public Class[] getParameterTypes() {
    Parameter[] parameters = method.getParameters();
    Class[] parameterTypes = new Class[parameters.length];
    for (int i = 0, j = parameters.length; i < j; i++) {
        parameterTypes[i] = parameters[i].getClazz();
    }
    return parameterTypes;
}
