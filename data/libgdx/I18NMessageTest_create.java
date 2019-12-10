@Override
public void create() {
    font = new BitmapFont();
    batch = new SpriteBatch();
    try {
        FileHandle bfh = Gdx.files.internal("data/i18n/message1");
        // Locale.ROOT doesn't exist in Android API level 8
        rb_root = I18NBundle.createBundle(bfh, new Locale("", "", ""));
        rb_default = I18NBundle.createBundle(bfh);
        rb_en = I18NBundle.createBundle(bfh, new Locale("en", "US"));
        rb_it = I18NBundle.createBundle(bfh, new Locale("it", "IT"));
        rb_unsupported = I18NBundle.createBundle(bfh, new Locale("unsupported"));
        println("Default locale: " + Locale.getDefault());
        println("\n\n---- Parent chain test ----");
        println(getMessage("root", rb_root));
        println(getMessage("default", rb_default));
        println(getMessage("en", rb_en));
        println(getMessage("it", rb_it));
        println(getMessage("unsupported", rb_unsupported));
        println("\n\n---- Parametric message test ----");
        println(getParametricMessage("root", rb_root));
        println(getParametricMessage("default", rb_default));
        println(getParametricMessage("en", rb_en));
        println(getParametricMessage("it", rb_it));
        println(getParametricMessage("unsupported", rb_unsupported));
        Gdx.app.log("", message);
    } catch (Throwable t) {
        message = "FAILED: " + t.getMessage() + "\n";
        message += t.getClass();
        Gdx.app.error(I18NMessageTest.class.getSimpleName(), "Error", t);
    }
}
