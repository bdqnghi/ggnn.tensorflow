/**
 * @return annotation of specified type, or null if not found.
 */
public Annotation getDeclaredAnnotation(Class<? extends java.lang.annotation.Annotation> annotationType) {
    for (Annotation annotation : annotations) {
        if (annotation.annotationType().equals(annotationType))
            return annotation;
    }
    return null;
}
