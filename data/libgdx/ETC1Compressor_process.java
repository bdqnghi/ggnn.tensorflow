public static void process(String inputDirectory, String outputDirectory, boolean recursive, boolean flatten) throws Exception {
    GdxNativesLoader.load();
    ETC1FileProcessor processor = new ETC1FileProcessor();
    processor.setRecursive(recursive);
    processor.setFlattenOutput(flatten);
    processor.process(new File(inputDirectory), new File(outputDirectory));
}
