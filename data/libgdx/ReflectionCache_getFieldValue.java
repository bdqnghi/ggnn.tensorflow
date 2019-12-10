public static Object getFieldValue(Field field, Object obj) throws IllegalAccessException {
    return instance.get(field, obj);
}
