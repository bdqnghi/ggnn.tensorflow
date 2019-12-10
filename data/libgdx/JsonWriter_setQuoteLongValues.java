/**
 * When true, quotes long, double, BigInteger, BigDecimal types to prevent truncation in languages like JavaScript and PHP.
 * This is not necessary when using libgdx, which handles these types without truncation. Default is false.
 */
public void setQuoteLongValues(boolean quoteLongValues) {
    this.quoteLongValues = quoteLongValues;
}
