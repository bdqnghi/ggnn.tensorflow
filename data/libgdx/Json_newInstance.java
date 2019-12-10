protected Object newInstance(Class type) {
    try {
        return ClassReflection.newInstance(type);
    } catch (Exception ex) {
        try {
            // Try a private constructor.
            Constructor constructor = ClassReflection.getDeclaredConstructor(type);
            constructor.setAccessible(true);
            return constructor.newInstance();
        } catch (SecurityException ignored) {
        } catch (ReflectionException ignored) {
            if (ClassReflection.isAssignableFrom(Enum.class, type)) {
                if (type.getEnumConstants() == null)
                    type = type.getSuperclass();
                return type.getEnumConstants()[0];
            }
            if (type.isArray())
                throw new SerializationException("Encountered JSON object when expected array of type: " + type.getName(), ex);
            else if (ClassReflection.isMemberClass(type) && !ClassReflection.isStaticClass(type))
                throw new SerializationException("Class cannot be created (non-static member class): " + type.getName(), ex);
            else
                throw new SerializationException("Class cannot be created (missing no-arg constructor): " + type.getName(), ex);
        } catch (Exception privateConstructorException) {
            ex = privateConstructorException;
        }
        throw new SerializationException("Error constructing instance of class: " + type.getName(), ex);
    }
}
