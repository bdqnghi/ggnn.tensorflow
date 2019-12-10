/**
 * When false, text set by {@link #setText(String)} may contain characters not in the font, a space will be displayed instead.
 * When true (the default), characters not in the font are stripped by setText. Characters not in the font are always stripped
 * when typed or pasted.
 */
public void setOnlyFontChars(boolean onlyFontChars) {
    this.onlyFontChars = onlyFontChars;
}
