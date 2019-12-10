/**
 * Returns an array of {@link Annotation} objects reflecting all annotations declared by this field,
 * or an empty array if there are none. Does not include inherited annotations.
 */
public Annotation[] getDeclaredAnnotations() {
    java.lang.annotation.Annotation[] annotations = field.getDeclaredAnnotations();
    Annotation[] result = new Annotation[annotations.length];
    for (int i = 0; i < annotations.length; i++) {
        result[i] = new Annotation(annotations[i]);
    }
    return result;
}
