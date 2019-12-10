/**
 * Returns an {@link Annotation} object reflecting the annotation provided, or null if this class doesn't have such an
 * annotation. This is a convenience function if the caller knows already which annotation type he's looking for.
 */
static public Annotation getAnnotation(Class c, Class<? extends java.lang.annotation.Annotation> annotationType) {
    java.lang.annotation.Annotation annotation = c.getAnnotation(annotationType);
    if (annotation != null)
        return new Annotation(annotation);
    return null;
}
