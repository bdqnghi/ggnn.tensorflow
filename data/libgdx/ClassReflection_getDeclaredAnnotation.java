/**
 * Returns an {@link Annotation} object reflecting the annotation provided, or null if this class doesn't have such an
 * annotation. This is a convenience function if the caller knows already which annotation type he's looking for.
 */
static public Annotation getDeclaredAnnotation(Class c, Class<? extends java.lang.annotation.Annotation> annotationType) {
    java.lang.annotation.Annotation[] annotations = c.getDeclaredAnnotations();
    for (java.lang.annotation.Annotation annotation : annotations) {
        if (annotation.annotationType().equals(annotationType))
            return new Annotation(annotation);
    }
    return null;
}
