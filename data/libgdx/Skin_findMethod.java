static private Method findMethod(Class type, String name) {
    Method[] methods = ClassReflection.getMethods(type);
    for (int i = 0, n = methods.length; i < n; i++) {
        Method method = methods[i];
        if (method.getName().equals(name))
            return method;
    }
    return null;
}
