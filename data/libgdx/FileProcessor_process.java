private void process(File[] files, File outputRoot, File outputDir, LinkedHashMap<File, ArrayList<Entry>> dirToEntries, int depth) {
    // Store empty entries for every directory.
    for (File file : files) {
        File dir = file.getParentFile();
        ArrayList<Entry> entries = dirToEntries.get(dir);
        if (entries == null) {
            entries = new ArrayList();
            dirToEntries.put(dir, entries);
        }
    }
    for (File file : files) {
        if (file.isFile()) {
            if (inputRegex.size > 0) {
                boolean found = false;
                for (Pattern pattern : inputRegex) {
                    if (pattern.matcher(file.getName()).matches()) {
                        found = true;
                        continue;
                    }
                }
                if (!found)
                    continue;
            }
            File dir = file.getParentFile();
            if (inputFilter != null && !inputFilter.accept(dir, file.getName()))
                continue;
            String outputName = file.getName();
            if (outputSuffix != null)
                outputName = outputName.replaceAll("(.*)\\..*", "$1") + outputSuffix;
            Entry entry = new Entry();
            entry.depth = depth;
            entry.inputFile = file;
            entry.outputDir = outputDir;
            if (flattenOutput) {
                entry.outputFile = new File(outputRoot, outputName);
            } else {
                entry.outputFile = new File(outputDir, outputName);
            }
            dirToEntries.get(dir).add(entry);
        }
        if (recursive && file.isDirectory()) {
            File subdir = outputDir.getPath().length() == 0 ? new File(file.getName()) : new File(outputDir, file.getName());
            process(file.listFiles(inputFilter), outputRoot, subdir, dirToEntries, depth + 1);
        }
    }
}
