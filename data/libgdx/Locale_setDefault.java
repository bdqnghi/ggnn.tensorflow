/**
 * Overrides the default locale. This does not affect system configuration,
 * and attempts to override the system-provided default locale may
 * themselves be overridden by actual changes to the system configuration.
 * Code that calls this method is usually incorrect, and should be fixed by
 * passing the appropriate locale to each locale-sensitive method that's
 * called.
 */
public synchronized static void setDefault(Locale locale) {
    if (locale == null) {
        throw new NullPointerException("locale == null");
    }
    defaultLocale = locale;
}
