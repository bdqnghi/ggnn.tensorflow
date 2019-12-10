private File extractFile(String sourcePath, String sourceCrc, File extractedFile) throws IOException {
    String extractedCrc = null;
    if (extractedFile.exists()) {
        try {
            extractedCrc = crc(new FileInputStream(extractedFile));
        } catch (FileNotFoundException ignored) {
        }
    }
    // If file doesn't exist or the CRC doesn't match, extract it to the temp dir.
    if (extractedCrc == null || !extractedCrc.equals(sourceCrc)) {
        try {
            InputStream input = readFile(sourcePath);
            extractedFile.getParentFile().mkdirs();
            FileOutputStream output = new FileOutputStream(extractedFile);
            byte[] buffer = new byte[4096];
            while (true) {
                int length = input.read(buffer);
                if (length == -1)
                    break;
                output.write(buffer, 0, length);
            }
            input.close();
            output.close();
        } catch (IOException ex) {
            throw new GdxRuntimeException("Error extracting file: " + sourcePath + "\nTo: " + extractedFile.getAbsolutePath(), ex);
        }
    }
    return extractedFile;
}
