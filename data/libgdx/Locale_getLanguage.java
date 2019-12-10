// /**
// * Equivalent to {@code getDisplayCountry(Locale.getDefault())}.
// */
// public final String getDisplayCountry() {
// return getDisplayCountry(getDefault());
// }
// 
// /**
// * Returns the name of this locale's country, localized to {@code locale}.
// * Returns the empty string if this locale does not correspond to a specific
// * country.
// */
// public String getDisplayCountry(Locale locale) {
// if (countryCode.isEmpty()) {
// return "";
// }
// String result = ICU.getDisplayCountryNative(toString(), locale.toString());
// if (result == null) { // TODO: do we need to do this, or does ICU do it for us?
// result = ICU.getDisplayCountryNative(toString(), Locale.getDefault().toString());
// }
// return result;
// }
// 
// /**
// * Equivalent to {@code getDisplayLanguage(Locale.getDefault())}.
// */
// public final String getDisplayLanguage() {
// return getDisplayLanguage(getDefault());
// }
// 
// /**
// * Returns the name of this locale's language, localized to {@code locale}.
// * If the language name is unknown, the language code is returned.
// */
// public String getDisplayLanguage(Locale locale) {
// if (languageCode.isEmpty()) {
// return "";
// }
// 
// // http://b/8049507 --- frameworks/base should use fil_PH instead of tl_PH.
// // Until then, we're stuck covering their tracks, making it look like they're
// // using "fil" when they're not.
// String localeString = toString();
// if (languageCode.equals("tl")) {
// localeString = toNewString("fil", countryCode, variantCode);
// }
// 
// String result = ICU.getDisplayLanguageNative(localeString, locale.toString());
// if (result == null) { // TODO: do we need to do this, or does ICU do it for us?
// result = ICU.getDisplayLanguageNative(localeString, Locale.getDefault().toString());
// }
// return result;
// }
// 
// /**
// * Equivalent to {@code getDisplayName(Locale.getDefault())}.
// */
// public final String getDisplayName() {
// return getDisplayName(getDefault());
// }
// 
// /**
// * Returns this locale's language name, country name, and variant, localized
// * to {@code locale}. The exact output form depends on whether this locale
// * corresponds to a specific language, country and variant.
// *
// * <p>For example:
// * <ul>
// * <li>{@code new Locale("en").getDisplayName(Locale.US)} -> {@code English}
// * <li>{@code new Locale("en", "US").getDisplayName(Locale.US)} -> {@code English (United States)}
// * <li>{@code new Locale("en", "US", "POSIX").getDisplayName(Locale.US)} -> {@code English (United States,Computer)}
// * <li>{@code new Locale("en").getDisplayName(Locale.FRANCE)} -> {@code anglais}
// * <li>{@code new Locale("en", "US").getDisplayName(Locale.FRANCE)} -> {@code anglais (tats-Unis)}
// * <li>{@code new Locale("en", "US", "POSIX").getDisplayName(Locale.FRANCE)} -> {@code anglais (tats-Unis,informatique)}.
// * </ul>
// */
// public String getDisplayName(Locale locale) {
// int count = 0;
// StringBuilder buffer = new StringBuilder();
// if (!languageCode.isEmpty()) {
// String displayLanguage = getDisplayLanguage(locale);
// buffer.append(displayLanguage.isEmpty() ? languageCode : displayLanguage);
// ++count;
// }
// if (!countryCode.isEmpty()) {
// if (count == 1) {
// buffer.append(" (");
// }
// String displayCountry = getDisplayCountry(locale);
// buffer.append(displayCountry.isEmpty() ? countryCode : displayCountry);
// ++count;
// }
// if (!variantCode.isEmpty()) {
// if (count == 1) {
// buffer.append(" (");
// } else if (count == 2) {
// buffer.append(",");
// }
// String displayVariant = getDisplayVariant(locale);
// buffer.append(displayVariant.isEmpty() ? variantCode : displayVariant);
// ++count;
// }
// if (count > 1) {
// buffer.append(")");
// }
// return buffer.toString();
// }
// 
// /**
// * Returns the full variant name in the default {@code Locale} for the variant code of
// * this {@code Locale}. If there is no matching variant name, the variant code is
// * returned.
// */
// public final String getDisplayVariant() {
// return getDisplayVariant(getDefault());
// }
// 
// /**
// * Returns the full variant name in the specified {@code Locale} for the variant code
// * of this {@code Locale}. If there is no matching variant name, the variant code is
// * returned.
// */
// public String getDisplayVariant(Locale locale) {
// if (variantCode.length() == 0) {
// return variantCode;
// }
// String result = ICU.getDisplayVariantNative(toString(), locale.toString());
// if (result == null) { // TODO: do we need to do this, or does ICU do it for us?
// result = ICU.getDisplayVariantNative(toString(), Locale.getDefault().toString());
// }
// return result;
// }
// 
// /**
// * Returns the three-letter ISO 3166 country code which corresponds to the country
// * code for this {@code Locale}.
// * @throws MissingResourceException if there's no 3-letter country code for this locale.
// */
// public String getISO3Country() {
// String code = ICU.getISO3CountryNative(toString());
// if (!countryCode.isEmpty() && code.isEmpty()) {
// throw new MissingResourceException("No 3-letter country code for locale: " + this, "FormatData_" + this, "ShortCountry");
// }
// return code;
// }
// 
// /**
// * Returns the three-letter ISO 639-2/T language code which corresponds to the language
// * code for this {@code Locale}.
// * @throws MissingResourceException if there's no 3-letter language code for this locale.
// */
// public String getISO3Language() {
// String code = ICU.getISO3LanguageNative(toString());
// if (!languageCode.isEmpty() && code.isEmpty()) {
// throw new MissingResourceException("No 3-letter language code for locale: " + this, "FormatData_" + this, "ShortLanguage");
// }
// return code;
// }
// 
// /**
// * Returns an array of strings containing all the two-letter ISO 3166 country codes that can be
// * used as the country code when constructing a {@code Locale}.
// */
// public static String[] getISOCountries() {
// return ICU.getISOCountries();
// }
// 
// /**
// * Returns an array of strings containing all the two-letter ISO 639-1 language codes that can be
// * used as the language code when constructing a {@code Locale}.
// */
// public static String[] getISOLanguages() {
// return ICU.getISOLanguages();
// }
/**
 * Returns the language code for this {@code Locale} or the empty string if no language
 * was set.
 */
public String getLanguage() {
    return languageCode;
}
