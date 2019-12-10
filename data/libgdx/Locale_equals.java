// @Override public Object clone() {
// try {
// return super.clone();
// } catch (CloneNotSupportedException e) {
// throw new AssertionError(e);
// }
// }
/**
 * Returns true if {@code object} is a locale with the same language,
 * country and variant.
 */
@Override
public boolean equals(Object object) {
    if (object == this) {
        return true;
    }
    if (object instanceof Locale) {
        Locale o = (Locale) object;
        return languageCode.equals(o.languageCode) && countryCode.equals(o.countryCode) && variantCode.equals(o.variantCode);
    }
    return false;
}
