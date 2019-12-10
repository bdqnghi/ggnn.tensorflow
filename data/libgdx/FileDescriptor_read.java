/**
 * Returns a stream for reading this file as bytes.
 * @throw RuntimeException if the file handle represents a directory, doesn't exist, or could not be read.
 */
public InputStream read() {
    if (type == FileType.Classpath && !file.exists()) {
        InputStream input = FileDescriptor.class.getResourceAsStream("/" + file.getPath().replace('\\', '/'));
        if (input == null)
            throw new RuntimeException("File not found: " + file + " (" + type + ")");
        return input;
    }
    try {
        return new FileInputStream(file());
    } catch (FileNotFoundException ex) {
        if (file().isDirectory())
            throw new RuntimeException("Cannot open a stream to a directory: " + file + " (" + type + ")", ex);
        throw new RuntimeException("Error reading file: " + file + " (" + type + ")", ex);
    }
}
