/**
 * Returns an array of {@link Field} objects reflecting all the fields declared by the supplied class.
 */
static public Field[] getDeclaredFields(Class c) {
    java.lang.reflect.Field[] fields = c.getDeclaredFields();
    Field[] result = new Field[fields.length];
    for (int i = 0, j = fields.length; i < j; i++) {
        result[i] = new Field(fields[i]);
    }
    return result;
}
