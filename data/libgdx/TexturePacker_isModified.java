/**
 * @return true if the output file does not yet exist or its last modification date is before the last modification date of the
 *         input file
 */
static public boolean isModified(String input, String output, String packFileName, Settings settings) {
    String packFullFileName = output;
    if (!packFullFileName.endsWith("/")) {
        packFullFileName += "/";
    }
    // Check against the only file we know for sure will exist and will be changed if any asset changes:
    // the atlas file
    packFullFileName += packFileName;
    packFullFileName += settings.atlasExtension;
    File outputFile = new File(packFullFileName);
    if (!outputFile.exists()) {
        return true;
    }
    File inputFile = new File(input);
    if (!inputFile.exists()) {
        throw new IllegalArgumentException("Input file does not exist: " + inputFile.getAbsolutePath());
    }
    return inputFile.lastModified() > outputFile.lastModified();
}
