private static String toNewString(String languageCode, String countryCode, String variantCode) {
    // The string form of a locale that only has a variant is the empty string.
    if (languageCode.length() == 0 && countryCode.length() == 0) {
        return "";
    }
    // Otherwise, the output format is "ll_cc_variant", where language and country are always
    // two letters, but the variant is an arbitrary length. A size of 11 characters has room
    // for "en_US_POSIX", the largest "common" value. (In practice, the string form is almost
    // always 5 characters: "ll_cc".)
    StringBuilder result = new StringBuilder(11);
    result.append(languageCode);
    if (countryCode.length() > 0 || variantCode.length() > 0) {
        result.append('_');
    }
    result.append(countryCode);
    if (variantCode.length() > 0) {
        result.append('_');
    }
    result.append(variantCode);
    return result.toString();
}
