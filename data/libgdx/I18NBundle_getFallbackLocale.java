/**
 * Returns a <code>Locale</code> to be used as a fallback locale for further bundle searches by the <code>createBundle</code>
 * factory method. This method is called from the factory method every time when no resulting bundle has been found for
 * <code>baseFileHandler</code> and <code>locale</code>, where locale is either the parameter for <code>createBundle</code> or
 * the previous fallback locale returned by this method.
 *
 * <p>
 * This method returns the {@linkplain Locale#getDefault() default <code>Locale</code>} if the given <code>locale</code> isn't
 * the default one. Otherwise, <code>null</code> is returned.
 *
 * @param locale the <code>Locale</code> for which <code>createBundle</code> has been unable to find any resource bundles
 *           (except for the base bundle)
 * @return a <code>Locale</code> for the fallback search, or <code>null</code> if no further fallback search is needed.
 * @exception NullPointerException if <code>locale</code> is <code>null</code>
 */
private static Locale getFallbackLocale(Locale locale) {
    Locale defaultLocale = Locale.getDefault();
    return locale.equals(defaultLocale) ? null : defaultLocale;
}
