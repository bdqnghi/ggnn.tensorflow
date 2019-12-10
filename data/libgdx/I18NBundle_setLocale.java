/**
 * Sets the bundle locale. This method is private because a bundle can't change the locale during its life.
 *
 * @param locale
 */
private void setLocale(Locale locale) {
    this.locale = locale;
    this.formatter = new TextFormatter(locale, !simpleFormatter);
}
