/**
 * Returns the user's preferred locale. This may have been overridden for
 * this process with {@link #setDefault}.
 *
 * <p>Since the user's locale changes dynamically, avoid caching this value.
 * Instead, use this method to look it up for each use.
 */
public static Locale getDefault() {
    return defaultLocale;
}
