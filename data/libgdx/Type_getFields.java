/**
 * @return an array containing all the public fields of this class and its super classes. See {@link Class#getFields()}.
 */
public Field[] getFields() {
    if (allFields == null) {
        ArrayList<Field> allFieldsList = new ArrayList<Field>();
        Type t = this;
        while (t != null) {
            for (Field f : t.fields) {
                if (f.isPublic)
                    allFieldsList.add(f);
            }
            t = t.getSuperclass();
        }
        allFields = allFieldsList.toArray(new Field[allFieldsList.size()]);
    }
    return allFields;
}
