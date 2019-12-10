protected void processDir(Entry inputDir, ArrayList<Entry> files) throws Exception {
    if (ignoreDirs.contains(inputDir.inputFile))
        return;
    // Find first parent with settings, or use defaults.
    Settings settings = null;
    File parent = inputDir.inputFile;
    while (true) {
        settings = dirToSettings.get(parent);
        if (settings != null)
            break;
        if (parent.equals(root))
            break;
        parent = parent.getParentFile();
    }
    if (settings == null)
        settings = defaultSettings;
    if (settings.combineSubdirectories) {
        // Collect all files under subdirectories and ignore subdirectories so they won't be packed twice.
        files = new FileProcessor(this) {

            protected void processDir(Entry entryDir, ArrayList<Entry> files) {
                ignoreDirs.add(entryDir.inputFile);
            }

            protected void processFile(Entry entry) {
                addProcessedFile(entry);
            }
        }.process(inputDir.inputFile, null);
    }
    if (files.isEmpty())
        return;
    // Sort by name using numeric suffix, then alpha.
    Collections.sort(files, new Comparator<Entry>() {

        final Pattern digitSuffix = Pattern.compile("(.*?)(\\d+)$");

        public int compare(Entry entry1, Entry entry2) {
            String full1 = entry1.inputFile.getName();
            int dotIndex = full1.lastIndexOf('.');
            if (dotIndex != -1)
                full1 = full1.substring(0, dotIndex);
            String full2 = entry2.inputFile.getName();
            dotIndex = full2.lastIndexOf('.');
            if (dotIndex != -1)
                full2 = full2.substring(0, dotIndex);
            String name1 = full1, name2 = full2;
            int num1 = 0, num2 = 0;
            Matcher matcher = digitSuffix.matcher(full1);
            if (matcher.matches()) {
                try {
                    num1 = Integer.parseInt(matcher.group(2));
                    name1 = matcher.group(1);
                } catch (Exception ignored) {
                }
            }
            matcher = digitSuffix.matcher(full2);
            if (matcher.matches()) {
                try {
                    num2 = Integer.parseInt(matcher.group(2));
                    name2 = matcher.group(1);
                } catch (Exception ignored) {
                }
            }
            int compare = name1.compareTo(name2);
            if (compare != 0 || num1 == num2)
                return compare;
            return num1 - num2;
        }
    });
    // Pack.
    if (!settings.silent)
        System.out.println(inputDir.inputFile.getName());
    TexturePacker packer = new TexturePacker(root, settings);
    for (Entry file : files) packer.addImage(file.inputFile);
    packer.pack(inputDir.outputDir, packFileName);
}
