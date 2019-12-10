/**
 * Adds a window icon. Icons are tried in the order added, the first one that works is used. Typically three icons should be
 * provided: 128x128 (for Mac), 32x32 (for Windows and Linux), and 16x16 (for Windows).
 */
public void addIcon(String path, FileType fileType) {
    iconPaths.add(path);
    iconFileTypes.add(fileType);
}
