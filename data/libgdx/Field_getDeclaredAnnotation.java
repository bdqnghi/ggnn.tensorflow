/**
 * Returns an {@link Annotation} object reflecting the annotation provided, or null of this field doesn't
 * have such an annotation. This is a convenience function if the caller knows already which annotation
 * type he's looking for.
 */
public Annotation getDeclaredAnnotation(Class<? extends java.lang.annotation.Annotation> annotationType) {
    java.lang.annotation.Annotation[] annotations = field.getDeclaredAnnotations();
    for (java.lang.annotation.Annotation annotation : annotations) {
        if (annotation.annotationType().equals(annotationType)) {
            return new Annotation(annotation);
        }
    }
    return null;
}
