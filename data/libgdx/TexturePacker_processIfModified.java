static public void processIfModified(Settings settings, String input, String output, String packFileName) {
    if (isModified(input, output, packFileName, settings)) {
        process(settings, input, output, packFileName);
    }
}
