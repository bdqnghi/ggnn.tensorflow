@Override
protected void processFile(Entry inputFile) throws Exception {
    filesScanned++;
    String content = new FileHandle(inputFile.inputFile).readString();
    if (content.trim().startsWith("package")) {
        System.out.println("File '" + inputFile.inputFile + "' header fixed");
        filesChanged++;
        BufferedWriter writer = new BufferedWriter(new OutputStreamWriter(new FileHandle(inputFile.outputFile).write(false)));
        writer.write(header + "\n\n" + content);
        writer.close();
    }
}
