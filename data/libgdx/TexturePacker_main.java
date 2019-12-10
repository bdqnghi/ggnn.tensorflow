static public void main(String[] args) throws Exception {
    Settings settings = null;
    String input = null, output = null, packFileName = "pack.atlas";
    switch(args.length) {
        case 4:
            settings = new Json().fromJson(Settings.class, new FileReader(args[3]));
        case 3:
            packFileName = args[2];
        case 2:
            output = args[1];
        case 1:
            input = args[0];
            break;
        default:
            System.out.println("Usage: inputDir [outputDir] [packFileName] [settingsFileName]");
            System.exit(0);
    }
    if (output == null) {
        File inputFile = new File(input);
        output = new File(inputFile.getParentFile(), inputFile.getName() + "-packed").getAbsolutePath();
    }
    if (settings == null)
        settings = new Settings();
    process(settings, input, output, packFileName);
}
