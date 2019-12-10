/**
 * A convenience method to write pixmaps by page; typically returned from a PixmapPacker when used alongside
 * FreeTypeFontGenerator.
 *
 * @param pages the pages containing the Pixmaps
 * @param outputDir the output directory
 * @param fileName the file name
 * @return the file refs
 */
public static String[] writePixmaps(Array<Page> pages, FileHandle outputDir, String fileName) {
    Pixmap[] pix = new Pixmap[pages.size];
    for (int i = 0; i < pages.size; i++) {
        pix[i] = pages.get(i).getPixmap();
    }
    return writePixmaps(pix, outputDir, fileName);
}
