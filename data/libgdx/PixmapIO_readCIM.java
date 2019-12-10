/**
 * Reads the {@link Pixmap} from the given file, assuming the Pixmap was written with the
 * {@link PixmapIO#writeCIM(FileHandle, Pixmap)} method. Throws a GdxRuntimeException in case the file couldn't be read.
 * @param file the file to read the Pixmap from
 */
static public Pixmap readCIM(FileHandle file) {
    return CIM.read(file);
}
