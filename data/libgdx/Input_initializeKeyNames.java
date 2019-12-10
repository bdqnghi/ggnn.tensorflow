/**
 * lazily intialized in {@link Keys#valueOf(String)}
 */
private static void initializeKeyNames() {
    keyNames = new ObjectIntMap<String>();
    for (int i = 0; i < 256; i++) {
        String name = toString(i);
        if (name != null)
            keyNames.put(name, i);
    }
}
