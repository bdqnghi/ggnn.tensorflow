@Override
protected void processDir(Entry entryDir, ArrayList<Entry> value) throws Exception {
    if (!entryDir.outputDir.exists()) {
        if (!entryDir.outputDir.mkdirs())
            throw new Exception("Couldn't create output directory '" + entryDir.outputDir + "'");
    }
}
