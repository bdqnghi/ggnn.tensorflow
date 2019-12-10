/**
 * Returns the locale of this bundle. This method can be used after a call to <code>createBundle()</code> to determine whether
 * the resource bundle returned really corresponds to the requested locale or is a fallback.
 *
 * @return the locale of this bundle
 */
public Locale getLocale() {
    return locale;
}
