/**
 * Returns an array of {@link Annotation} objects reflecting all annotations declared by the supplied class, or an empty
 * array if there are none. Does not include inherited annotations.
 */
static public Annotation[] getDeclaredAnnotations(Class c) {
    java.lang.annotation.Annotation[] annotations = c.getDeclaredAnnotations();
    Annotation[] result = new Annotation[annotations.length];
    for (int i = 0; i < annotations.length; i++) {
        result[i] = new Annotation(annotations[i]);
    }
    return result;
}
