private static I18NBundle loadBundleChain(FileHandle baseFileHandle, String encoding, List<Locale> candidateLocales, int candidateIndex, I18NBundle baseBundle) {
    Locale targetLocale = candidateLocales.get(candidateIndex);
    I18NBundle parent = null;
    if (candidateIndex != candidateLocales.size() - 1) {
        // Load recursively the parent having the next candidate locale
        parent = loadBundleChain(baseFileHandle, encoding, candidateLocales, candidateIndex + 1, baseBundle);
    } else if (baseBundle != null && targetLocale.equals(ROOT_LOCALE)) {
        return baseBundle;
    }
    // Load the bundle
    I18NBundle bundle = loadBundle(baseFileHandle, encoding, targetLocale);
    if (bundle != null) {
        bundle.parent = parent;
        return bundle;
    }
    return parent;
}
