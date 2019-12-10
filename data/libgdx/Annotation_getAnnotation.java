@SuppressWarnings("unchecked")
public <T extends java.lang.annotation.Annotation> T getAnnotation(Class<T> annotationType) {
    if (annotation.annotationType().equals(annotationType)) {
        return (T) annotation;
    }
    return null;
}
