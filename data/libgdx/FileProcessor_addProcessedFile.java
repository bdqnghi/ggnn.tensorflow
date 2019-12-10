/**
 * This method should be called by {@link #processFile(Entry)} or {@link #processDir(Entry, ArrayList)} if the return value of
 * {@link #process(File, File)} or {@link #process(File[], File)} should return all the processed files.
 */
protected void addProcessedFile(Entry entry) {
    outputFiles.add(entry);
}
