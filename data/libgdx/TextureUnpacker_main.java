public static void main(String[] args) {
    TextureUnpacker unpacker = new TextureUnpacker();
    String atlasFile = null, imageDir = null, outputDir = null;
    // parse the arguments and display the help text if there is a problem with the command line arguments
    switch(unpacker.parseArguments(args)) {
        case 0:
            System.out.println(HELP);
            return;
        case 3:
            outputDir = args[2];
        case 2:
            imageDir = args[1];
        case 1:
            atlasFile = args[0];
    }
    File atlasFileHandle = new File(atlasFile);
    String atlasParentPath = atlasFileHandle.getParentFile().getAbsolutePath();
    // Set the directory variables to a default when they weren't given in the variables
    if (imageDir == null)
        imageDir = atlasParentPath;
    if (outputDir == null)
        outputDir = (new File(atlasParentPath, DEFAULT_OUTPUT_PATH)).getAbsolutePath();
    // Opens the atlas file from the specified filename
    TextureAtlasData atlas = new TextureAtlasData(new FileHandle(atlasFile), new FileHandle(imageDir), false);
    unpacker.splitAtlas(atlas, outputDir);
}
