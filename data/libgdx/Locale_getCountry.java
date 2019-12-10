// /**
// * Returns the system's installed locales. This array always includes {@code
// * Locale.US}, and usually several others. Most locale-sensitive classes
// * offer their own {@code getAvailableLocales} method, which should be
// * preferred over this general purpose method.
// *
// * @see java.text.BreakIterator#getAvailableLocales()
// * @see java.text.Collator#getAvailableLocales()
// * @see java.text.DateFormat#getAvailableLocales()
// * @see java.text.DateFormatSymbols#getAvailableLocales()
// * @see java.text.DecimalFormatSymbols#getAvailableLocales()
// * @see java.text.NumberFormat#getAvailableLocales()
// * @see java.util.Calendar#getAvailableLocales()
// */
// public static Locale[] getAvailableLocales() {
// return ICU.getAvailableLocales();
// }
/**
 * Returns the country code for this locale, or {@code ""} if this locale
 * doesn't correspond to a specific country.
 */
public String getCountry() {
    return countryCode;
}
