private Constructor findConstructor(Class<T> type) {
    try {
        return ClassReflection.getConstructor(type, (Class[]) null);
    } catch (Exception ex1) {
        try {
            Constructor constructor = ClassReflection.getDeclaredConstructor(type, (Class[]) null);
            constructor.setAccessible(true);
            return constructor;
        } catch (ReflectionException ex2) {
            return null;
        }
    }
}
