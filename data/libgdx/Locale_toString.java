/**
 * Returns the string representation of this {@code Locale}. It consists of the
 * language code, country code and variant separated by underscores.
 * If the language is missing the string begins
 * with an underscore. If the country is missing there are 2 underscores
 * between the language and the variant. The variant cannot stand alone
 * without a language and/or country code: in this case this method would
 * return the empty string.
 *
 * <p>Examples: "en", "en_US", "_US", "en__POSIX", "en_US_POSIX"
 */
@Override
public final String toString() {
    String result = cachedToStringResult;
    if (result == null) {
        result = cachedToStringResult = toNewString(languageCode, countryCode, variantCode);
    }
    return result;
}
