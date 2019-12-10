/**
 * Writes the {@link Pixmap} to the given file using a custom compression scheme. First three integers define the width, height
 * and format, remaining bytes are zlib compressed pixels. To be able to load the Pixmap to a Texture, use ".cim" as the file
 * suffix. Throws a GdxRuntimeException in case the Pixmap couldn't be written to the file.
 * @param file the file to write the Pixmap to
 */
static public void writeCIM(FileHandle file, Pixmap pixmap) {
    CIM.write(file, pixmap);
}
