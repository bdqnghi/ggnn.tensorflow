@Override
public void loadAsync(AssetManager manager, String fileName, FileHandle file, I18NBundleParameter parameter) {
    this.bundle = null;
    Locale locale;
    String encoding;
    if (parameter == null) {
        locale = Locale.getDefault();
        encoding = null;
    } else {
        locale = parameter.locale == null ? Locale.getDefault() : parameter.locale;
        encoding = parameter.encoding;
    }
    if (encoding == null) {
        this.bundle = I18NBundle.createBundle(file, locale);
    } else {
        this.bundle = I18NBundle.createBundle(file, locale, encoding);
    }
}
