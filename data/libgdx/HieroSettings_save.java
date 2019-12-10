/**
 * Saves the settings to a file.
 * @throws IOException if the file could not be saved.
 */
public void save(File file) throws IOException {
    PrintStream out = new PrintStream(file, "UTF-8");
    out.println("font.name=" + fontName);
    out.println("font.size=" + fontSize);
    out.println("font.bold=" + bold);
    out.println("font.italic=" + italic);
    out.println("font.gamma=" + gamma);
    out.println("font.mono=" + mono);
    out.println();
    out.println("font2.file=" + font2File);
    out.println("font2.use=" + font2Active);
    out.println();
    out.println("pad.top=" + paddingTop);
    out.println("pad.right=" + paddingRight);
    out.println("pad.bottom=" + paddingBottom);
    out.println("pad.left=" + paddingLeft);
    out.println("pad.advance.x=" + paddingAdvanceX);
    out.println("pad.advance.y=" + paddingAdvanceY);
    out.println();
    out.println("glyph.native.rendering=" + nativeRendering);
    out.println("glyph.page.width=" + glyphPageWidth);
    out.println("glyph.page.height=" + glyphPageHeight);
    out.println("glyph.text=" + glyphText);
    out.println();
    for (Iterator iter = effects.iterator(); iter.hasNext(); ) {
        ConfigurableEffect effect = (ConfigurableEffect) iter.next();
        out.println("effect.class=" + effect.getClass().getName());
        for (Iterator iter2 = effect.getValues().iterator(); iter2.hasNext(); ) {
            Value value = (Value) iter2.next();
            out.println("effect." + value.getName() + "=" + value.getString());
        }
        out.println();
    }
    out.close();
}
