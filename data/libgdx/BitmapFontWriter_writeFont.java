/**
 * A utility method which writes the given font data to a file.
 *
 * The specified pixmaps are written to the parent directory of <tt>outFntFile</tt>, using that file's name without an
 * extension for the PNG file name(s).
 *
 * The specified FontInfo is optional, and can be null.
 *
 * Typical usage looks like this:
 *
 * <pre>
 * BitmapFontWriter.writeFont(myFontData, myFontPixmaps, Gdx.files.external(&quot;fonts/output.fnt&quot;), new FontInfo(&quot;Arial&quot;, 16));
 * </pre>
 *
 * @param fontData the font data
 * @param pages the pixmaps to write as PNGs
 * @param outFntFile the output file for the font definition
 * @param info the optional font info for the header file, can be null
 */
public static void writeFont(BitmapFontData fontData, Pixmap[] pages, FileHandle outFntFile, FontInfo info) {
    String[] pageRefs = writePixmaps(pages, outFntFile.parent(), outFntFile.nameWithoutExtension());
    // write the font data
    writeFont(fontData, pageRefs, outFntFile, info, pages[0].getWidth(), pages[0].getHeight());
}
