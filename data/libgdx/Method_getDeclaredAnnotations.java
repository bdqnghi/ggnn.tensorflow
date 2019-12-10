/**
 * Returns an array of {@link Annotation} objects reflecting all annotations declared by this method,
 * or an empty array if there are none. Does not include inherited annotations.
 * Does not include parameter annotations.
 */
public Annotation[] getDeclaredAnnotations() {
    java.lang.annotation.Annotation[] annotations = method.getDeclaredAnnotations();
    Annotation[] result = new Annotation[annotations.length];
    for (int i = 0; i < annotations.length; i++) {
        result[i] = new Annotation(annotations[i]);
    }
    return result;
}
