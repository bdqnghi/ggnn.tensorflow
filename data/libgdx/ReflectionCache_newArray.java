public static Object newArray(Class componentType, int size) {
    return instance.newArray(getType(componentType), size);
}
