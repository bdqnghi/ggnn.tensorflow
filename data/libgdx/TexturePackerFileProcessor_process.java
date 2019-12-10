public ArrayList<Entry> process(File[] files, File outputRoot) throws Exception {
    // Delete pack file and images.
    if (outputRoot.exists()) {
        // Load root settings to get scale.
        File settingsFile = new File(root, "pack.json");
        Settings rootSettings = defaultSettings;
        if (settingsFile.exists()) {
            rootSettings = new Settings(rootSettings);
            merge(rootSettings, settingsFile);
        }
        for (int i = 0, n = rootSettings.scale.length; i < n; i++) {
            FileProcessor deleteProcessor = new FileProcessor() {

                protected void processFile(Entry inputFile) throws Exception {
                    inputFile.inputFile.delete();
                }
            };
            deleteProcessor.setRecursive(false);
            String scaledPackFileName = rootSettings.getScaledPackFileName(packFileName, i);
            File packFile = new File(scaledPackFileName);
            String prefix = packFile.getName();
            int dotIndex = prefix.lastIndexOf('.');
            if (dotIndex != -1)
                prefix = prefix.substring(0, dotIndex);
            deleteProcessor.addInputRegex("(?i)" + prefix + "\\d*\\.(png|jpg|jpeg)");
            deleteProcessor.addInputRegex("(?i)" + prefix + "\\.atlas");
            String dir = packFile.getParent();
            if (dir == null)
                deleteProcessor.process(outputRoot, null);
            else if (// 
            new File(outputRoot + "/" + dir).exists())
                deleteProcessor.process(outputRoot + "/" + dir, null);
        }
    }
    return super.process(files, outputRoot);
}
