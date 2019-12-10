/**
 * Returns an array of {@link Field} containing the public fields of the class represented by the supplied Class.
 */
static public Field[] getFields(Class c) {
    java.lang.reflect.Field[] fields = c.getFields();
    Field[] result = new Field[fields.length];
    for (int i = 0, j = fields.length; i < j; i++) {
        result[i] = new Field(fields[i]);
    }
    return result;
}
