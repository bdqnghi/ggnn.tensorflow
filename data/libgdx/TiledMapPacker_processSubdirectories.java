/**
 * Looks for subdirectories inside parentHandle, processes maps in subdirectory, repeat.
 * @param currentDir The directory to look for maps and other directories
 * @throws IOException
 */
private void processSubdirectories(FileHandle currentDir, Settings texturePackerSettings) throws IOException {
    File parentPath = new File(currentDir.path());
    File[] directories = parentPath.listFiles(new DirFilter());
    for (File directory : directories) {
        currentDir = new FileHandle(directory.getCanonicalPath());
        File[] mapFilesInCurrentDir = directory.listFiles(new TmxFilter());
        for (File mapFile : mapFilesInCurrentDir) {
            processSingleMap(mapFile, currentDir, texturePackerSettings);
        }
        processSubdirectories(currentDir, texturePackerSettings);
    }
}
