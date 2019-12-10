public static Type getType(Class clazz) {
    if (clazz == null)
        return null;
    Type type = instance.forName(convert(clazz.getName()));
    if (type == null) {
        throw new RuntimeException("Couldn't find Type for class '" + clazz.getName() + "'");
    }
    return type;
}
