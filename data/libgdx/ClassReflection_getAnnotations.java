/**
 * Returns an array of {@link Annotation} objects reflecting all annotations declared by the supplied class, and inherited
 * from its superclass. Returns an empty array if there are none.
 */
static public Annotation[] getAnnotations(Class c) {
    java.lang.annotation.Annotation[] annotations = c.getAnnotations();
    Annotation[] result = new Annotation[annotations.length];
    for (int i = 0; i < annotations.length; i++) {
        result[i] = new Annotation(annotations[i]);
    }
    return result;
}
