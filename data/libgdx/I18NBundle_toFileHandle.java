/**
 * Converts the given <code>baseFileHandle</code> and <code>locale</code> to the corresponding file handle.
 *
 * <p>
 * This implementation returns the <code>baseFileHandle</code>'s sibling with following value:
 *
 * <pre>
 * baseFileHandle.name() + &quot;_&quot; + language + &quot;_&quot; + country + &quot;_&quot; + variant + &quot;.properties&quot;
 * </pre>
 *
 * where <code>language</code>, <code>country</code> and <code>variant</code> are the language, country and variant values of
 * <code>locale</code>, respectively. Final component values that are empty Strings are omitted along with the preceding '_'.
 * If all of the values are empty strings, then <code>baseFileHandle.name()</code> is returned with ".properties" appended.
 *
 * @param baseFileHandle the file handle to the base of the bundle
 * @param locale the locale for which a resource bundle should be loaded
 * @return the file handle for the bundle
 * @exception NullPointerException if <code>baseFileHandle</code> or <code>locale</code> is <code>null</code>
 */
private static FileHandle toFileHandle(FileHandle baseFileHandle, Locale locale) {
    StringBuilder sb = new StringBuilder(baseFileHandle.name());
    if (!locale.equals(ROOT_LOCALE)) {
        String language = locale.getLanguage();
        String country = locale.getCountry();
        String variant = locale.getVariant();
        boolean emptyLanguage = "".equals(language);
        boolean emptyCountry = "".equals(country);
        boolean emptyVariant = "".equals(variant);
        if (!(emptyLanguage && emptyCountry && emptyVariant)) {
            sb.append('_');
            if (!emptyVariant) {
                sb.append(language).append('_').append(country).append('_').append(variant);
            } else if (!emptyCountry) {
                sb.append(language).append('_').append(country);
            } else {
                sb.append(language);
            }
        }
    }
    return baseFileHandle.sibling(sb.append(".properties").toString());
}
