/**
 * Extracts the specified file into the temp directory if it does not already exist or the CRC does not match. If file
 * extraction fails and the file exists at java.library.path, that file is returned.
 * @param sourcePath The file to extract from the classpath or JAR.
 * @param dir The location where the extracted file will be written.
 */
public void extractFileTo(String sourcePath, File dir) throws IOException {
    extractFile(sourcePath, crc(readFile(sourcePath)), new File(dir, new File(sourcePath).getName()));
}
