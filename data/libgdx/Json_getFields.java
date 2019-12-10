private OrderedMap<String, FieldMetadata> getFields(Class type) {
    OrderedMap<String, FieldMetadata> fields = typeToFields.get(type);
    if (fields != null)
        return fields;
    Array<Class> classHierarchy = new Array();
    Class nextClass = type;
    while (nextClass != Object.class) {
        classHierarchy.add(nextClass);
        nextClass = nextClass.getSuperclass();
    }
    ArrayList<Field> allFields = new ArrayList();
    for (int i = classHierarchy.size - 1; i >= 0; i--) Collections.addAll(allFields, ClassReflection.getDeclaredFields(classHierarchy.get(i)));
    OrderedMap<String, FieldMetadata> nameToField = new OrderedMap(allFields.size());
    for (int i = 0, n = allFields.size(); i < n; i++) {
        Field field = allFields.get(i);
        if (field.isTransient())
            continue;
        if (field.isStatic())
            continue;
        if (field.isSynthetic())
            continue;
        if (!field.isAccessible()) {
            try {
                field.setAccessible(true);
            } catch (AccessControlException ex) {
                continue;
            }
        }
        nameToField.put(field.getName(), new FieldMetadata(field));
    }
    typeToFields.put(type, nameToField);
    return nameToField;
}
