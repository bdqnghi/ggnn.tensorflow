/**
 * Creates a new bundle using the specified <code>baseFileHandle</code>, <code>locale</code> and <code>encoding</code>.
 *
 * @param baseFileHandle the file handle to the base of the bundle
 * @param locale the locale for which a bundle is desired
 * @param encoding the charter encoding
 * @return a bundle for the given base file handle and locale
 * @exception NullPointerException if <code>baseFileHandle</code>, <code>locale</code> or <code>encoding</code> is
 *               <code>null</code>
 * @exception MissingResourceException if no bundle for the specified base file handle can be found
 */
public static I18NBundle createBundle(FileHandle baseFileHandle, Locale locale, String encoding) {
    return createBundleImpl(baseFileHandle, locale, encoding);
}
