/**
 * Returns the path to the TTF file for this UnicodeFont, or null. If this UnicodeFont was created without specifying the TTF
 * file, it will try to determine the path using Sun classes. If this fails, null is returned.
 */
public String getFontFile() {
    if (ttfFileRef == null) {
        // Worst case if this UnicodeFont was loaded without a ttfFileRef, try to get the font file from Sun's classes.
        try {
            Object font2D;
            try {
                // Java 7+.
                font2D = Class.forName("sun.font.FontUtilities").getDeclaredMethod("getFont2D", new Class[] { Font.class }).invoke(null, new Object[] { font });
            } catch (Throwable ignored) {
                font2D = Class.forName("sun.font.FontManager").getDeclaredMethod("getFont2D", new Class[] { Font.class }).invoke(null, new Object[] { font });
            }
            Field platNameField = Class.forName("sun.font.PhysicalFont").getDeclaredField("platName");
            platNameField.setAccessible(true);
            ttfFileRef = (String) platNameField.get(font2D);
        } catch (Throwable ignored) {
        }
        if (ttfFileRef == null)
            ttfFileRef = "";
    }
    if (ttfFileRef.length() == 0)
        return null;
    return ttfFileRef;
}
