public static void process(String directory) throws Exception {
    HeaderFileProcessor processor = new HeaderFileProcessor();
    processor.process(new File(directory), new File(directory));
}
