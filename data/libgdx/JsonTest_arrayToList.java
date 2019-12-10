static Object arrayToList(Object array) {
    if (array == null || !array.getClass().isArray())
        return array;
    ArrayList list = new ArrayList(ArrayReflection.getLength(array));
    for (int i = 0, n = ArrayReflection.getLength(array); i < n; i++) list.add(arrayToList(ArrayReflection.get(array, i)));
    return list;
}
