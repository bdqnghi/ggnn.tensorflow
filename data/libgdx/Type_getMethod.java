/**
 * @param name the name of the method
 * @param parameterTypes the types of the parameters of the method
 * @return the public method that matches the name and parameter types of this type or one of its super interfaces.
 * @throws NoSuchMethodException
 */
public Method getMethod(String name, Class... parameterTypes) throws NoSuchMethodException {
    for (Method m : getMethods()) {
        if (m.match(name, parameterTypes))
            return m;
    }
    throw new NoSuchMethodException();
}
