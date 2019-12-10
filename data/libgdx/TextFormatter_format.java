/**
 * Formats the given {@code pattern} replacing its placeholders with the actual arguments specified by {@code args}.
 * <p>
 * If this {@code TextFormatter} has been instantiated with {@link #TextFormatter(Locale, boolean) TextFormatter(locale, true)}
 * {@link MessageFormat} is used to process the pattern, meaning that the actual arguments are properly localized with the
 * locale of this {@code TextFormatter}.
 * <p>
 * On the contrary, if this {@code TextFormatter} has been instantiated with {@link #TextFormatter(Locale, boolean)
 * TextFormatter(locale, false)} pattern's placeholders are expected to be in the simplified form {0}, {1}, {2} and so on and
 * they will be replaced with the corresponding object from {@code args} converted to a string with {@code toString()}, so
 * without taking into account the locale.
 * <p>
 * In both cases, there's only one simple escaping rule, i.e. a left curly bracket must be doubled if you want it to be part of
 * your string.
 * <p>
 * It's worth noting that the rules for using single quotes within {@link MessageFormat} patterns have shown to be somewhat
 * confusing. In particular, it isn't always obvious to localizers whether single quotes need to be doubled or not. For this
 * very reason we decided to offer the simpler escaping rule above without limiting the expressive power of message format
 * patterns. So, if you're used to MessageFormat's syntax, remember that with {@code TextFormatter} single quotes never need to
 * be escaped!
 *
 * @param pattern the pattern
 * @param args the arguments
 * @return the formatted pattern
 * @exception IllegalArgumentException if the pattern is invalid
 */
public String format(String pattern, Object... args) {
    if (messageFormat != null) {
        messageFormat.applyPattern(replaceEscapeChars(pattern));
        return messageFormat.format(args);
    }
    return simpleFormat(pattern, args);
}
