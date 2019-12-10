/**
 * @param input Directory containing individual images to be packed.
 * @param output Directory where the pack file and page images will be written.
 * @param packFileName The name of the pack file. Also used to name the page images.
 */
static public void process(Settings settings, String input, String output, String packFileName) {
    try {
        TexturePackerFileProcessor processor = new TexturePackerFileProcessor(settings, packFileName);
        // Sort input files by name to avoid platform-dependent atlas output changes.
        processor.setComparator(new Comparator<File>() {

            public int compare(File file1, File file2) {
                return file1.getName().compareTo(file2.getName());
            }
        });
        processor.process(new File(input), new File(output));
    } catch (Exception ex) {
        throw new RuntimeException("Error packing images.", ex);
    }
}
