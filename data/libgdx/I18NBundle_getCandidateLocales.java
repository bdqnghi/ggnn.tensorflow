/**
 * Returns a <code>List</code> of <code>Locale</code>s as candidate locales for the given <code>locale</code>. This method is
 * called by the <code>createBundle</code> factory method each time the factory method tries finding a resource bundle for a
 * target <code>Locale</code>.
 *
 * <p>
 * The sequence of the candidate locales also corresponds to the runtime resource lookup path (also known as the <I>parent
 * chain</I>), if the corresponding resource bundles for the candidate locales exist and their parents are not defined by
 * loaded resource bundles themselves. The last element of the list is always the {@linkplain Locale#ROOT root locale}, meaning
 * that the base bundle is the terminal of the parent chain.
 *
 * <p>
 * If the given locale is equal to <code>Locale.ROOT</code> (the root locale), a <code>List</code> containing only the root
 * <code>Locale</code> is returned. In this case, the <code>createBundle</code> factory method loads only the base bundle as
 * the resulting resource bundle.
 *
 * <p>
 * This implementation returns a <code>List</code> containing <code>Locale</code>s in the following sequence:
 *
 * <pre>
 *     Locale(language, country, variant)
 *     Locale(language, country)
 *     Locale(language)
 *     Locale.ROOT
 * </pre>
 *
 * where <code>language</code>, <code>country</code> and <code>variant</code> are the language, country and variant values of
 * the given <code>locale</code>, respectively. Locales where the final component values are empty strings are omitted.
 *
 * <p>
 * For example, if the given base name is "Messages" and the given <code>locale</code> is
 * <code>Locale("ja",&nbsp;"",&nbsp;"XX")</code>, then a <code>List</code> of <code>Locale</code>s:
 *
 * <pre>
 *     Locale("ja", "", "XX")
 *     Locale("ja")
 *     Locale.ROOT
 * </pre>
 *
 * is returned. And if the resource bundles for the "ja" and "" <code>Locale</code>s are found, then the runtime resource
 * lookup path (parent chain) is:
 *
 * <pre>
 *     Messages_ja -> Messages
 * </pre>
 *
 * @param locale the locale for which a resource bundle is desired
 * @return a <code>List</code> of candidate <code>Locale</code>s for the given <code>locale</code>
 * @exception NullPointerException if <code>locale</code> is <code>null</code>
 */
private static List<Locale> getCandidateLocales(Locale locale) {
    String language = locale.getLanguage();
    String country = locale.getCountry();
    String variant = locale.getVariant();
    List<Locale> locales = new ArrayList<Locale>(4);
    if (variant.length() > 0) {
        locales.add(locale);
    }
    if (country.length() > 0) {
        locales.add((locales.size() == 0) ? locale : new Locale(language, country));
    }
    if (language.length() > 0) {
        locales.add((locales.size() == 0) ? locale : new Locale(language));
    }
    locales.add(ROOT_LOCALE);
    return locales;
}
