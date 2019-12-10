private Object copy(Object object) {
    try {
        Constructor theConstructor = null;
        for (Constructor constructor : ClassReflection.getConstructors(object.getClass())) {
            if (constructor.getParameterTypes().length == 1 && ClassReflection.isAssignableFrom(constructor.getParameterTypes()[0], object.getClass())) {
                theConstructor = constructor;
                break;
            }
        }
        return theConstructor.newInstance(object);
    } catch (Throwable ex) {
        throw new GdxRuntimeException(ex);
    }
}
