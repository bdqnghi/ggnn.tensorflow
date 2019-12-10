/**
 * Returns true if the supplied class includes an annotation of the given type.
 */
static public boolean isAnnotationPresent(Class c, Class<? extends java.lang.annotation.Annotation> annotationType) {
    return c.isAnnotationPresent(annotationType);
}
