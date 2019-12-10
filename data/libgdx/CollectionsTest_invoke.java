private void invoke(String methodName, Object object, Object... args) {
    try {
        Method theMethod = null;
        for (Method method : ClassReflection.getMethods(object.getClass())) {
            if (methodName.equals(method.getName()) && method.getParameterTypes().length == args.length) {
                theMethod = method;
                break;
            }
        }
        theMethod.invoke(object, args);
    } catch (Throwable ex) {
        throw new GdxRuntimeException(ex);
    }
}
