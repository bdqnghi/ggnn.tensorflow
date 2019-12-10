/**
 * @param ttfFileRef The file system or classpath location of the TrueTypeFont file.
 */
static private Font createFont(String ttfFileRef) {
    try {
        return Font.createFont(Font.TRUETYPE_FONT, Gdx.files.absolute(ttfFileRef).read());
    } catch (FontFormatException ex) {
        throw new GdxRuntimeException("Invalid font: " + ttfFileRef, ex);
    } catch (IOException ex) {
        throw new GdxRuntimeException("Error reading font: " + ttfFileRef, ex);
    }
}
