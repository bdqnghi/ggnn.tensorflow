/**
 * Returns the defaults to use for all cells. This can be used to avoid needing to set the same defaults for every table (eg,
 * for spacing).
 */
static public Cell defaults() {
    if (files == null || files != Gdx.files) {
        files = Gdx.files;
        defaults = new Cell();
        defaults.minWidth = Value.minWidth;
        defaults.minHeight = Value.minHeight;
        defaults.prefWidth = Value.prefWidth;
        defaults.prefHeight = Value.prefHeight;
        defaults.maxWidth = Value.maxWidth;
        defaults.maxHeight = Value.maxHeight;
        defaults.spaceTop = Value.zero;
        defaults.spaceLeft = Value.zero;
        defaults.spaceBottom = Value.zero;
        defaults.spaceRight = Value.zero;
        defaults.padTop = Value.zero;
        defaults.padLeft = Value.zero;
        defaults.padBottom = Value.zero;
        defaults.padRight = Value.zero;
        defaults.fillX = zerof;
        defaults.fillY = zerof;
        defaults.align = centeri;
        defaults.expandX = zeroi;
        defaults.expandY = zeroi;
        defaults.colspan = onei;
        defaults.uniformX = null;
        defaults.uniformY = null;
    }
    return defaults;
}
