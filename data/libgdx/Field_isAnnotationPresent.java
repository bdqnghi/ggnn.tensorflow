/**
 * Returns true if the field includes an annotation of the provided class type.
 */
public boolean isAnnotationPresent(Class<? extends java.lang.annotation.Annotation> annotationType) {
    java.lang.annotation.Annotation[] annotations = field.getDeclaredAnnotations();
    for (java.lang.annotation.Annotation annotation : annotations) {
        if (annotation.annotationType().equals(annotationType)) {
            return true;
        }
    }
    return false;
}
