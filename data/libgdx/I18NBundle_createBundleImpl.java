private static I18NBundle createBundleImpl(FileHandle baseFileHandle, Locale locale, String encoding) {
    if (baseFileHandle == null || locale == null || encoding == null)
        throw new NullPointerException();
    I18NBundle bundle = null;
    I18NBundle baseBundle = null;
    Locale targetLocale = locale;
    do {
        // Create the candidate locales
        List<Locale> candidateLocales = getCandidateLocales(targetLocale);
        // Load the bundle and its parents recursively
        bundle = loadBundleChain(baseFileHandle, encoding, candidateLocales, 0, baseBundle);
        // Check the loaded bundle (if any)
        if (bundle != null) {
            // WTH? GWT can't access bundle.locale directly
            Locale bundleLocale = bundle.getLocale();
            boolean isBaseBundle = bundleLocale.equals(ROOT_LOCALE);
            if (!isBaseBundle || bundleLocale.equals(locale)) {
                // Found the bundle for the requested locale
                break;
            }
            if (candidateLocales.size() == 1 && bundleLocale.equals(candidateLocales.get(0))) {
                // Found the bundle for the only candidate locale
                break;
            }
            if (isBaseBundle && baseBundle == null) {
                // Store the base bundle and keep on processing the remaining fallback locales
                baseBundle = bundle;
            }
        }
        // Set next fallback locale
        targetLocale = getFallbackLocale(targetLocale);
    } while (targetLocale != null);
    if (bundle == null) {
        if (baseBundle == null) {
            // No bundle found
            throw new MissingResourceException("Can't find bundle for base file handle " + baseFileHandle.path() + ", locale " + locale, baseFileHandle + "_" + locale, "");
        }
        // Set the base bundle to be returned
        bundle = baseBundle;
    }
    return bundle;
}
