public static List<String> getNames() {
    List<String> names = new ArrayList<String>(tests.size());
    for (Class clazz : tests) names.add(obfuscatedToOriginal.get(clazz.getSimpleName(), clazz.getSimpleName()));
    Collections.sort(names);
    return names;
}
