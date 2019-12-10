public static Type forName(String name) throws ClassNotFoundException {
    Type type = instance.forName(convert(name));
    if (type == null) {
        throw new RuntimeException("Couldn't find Type for class '" + name + "'");
    }
    return type;
}
