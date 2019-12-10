private static Class<? extends GdxTest> forName(String name) {
    name = originalToObfuscated.get(name, name);
    for (Class clazz : tests) if (clazz.getSimpleName().equals(name))
        return clazz;
    return null;
}
