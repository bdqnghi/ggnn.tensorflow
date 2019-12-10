public void pack(File outputDir, String packFileName) {
    if (packFileName.endsWith(settings.atlasExtension))
        packFileName = packFileName.substring(0, packFileName.length() - settings.atlasExtension.length());
    outputDir.mkdirs();
    for (int i = 0, n = settings.scale.length; i < n; i++) {
        imageProcessor.setScale(settings.scale[i]);
        for (InputImage inputImage : inputImages) {
            if (inputImage.file != null)
                imageProcessor.addImage(inputImage.file);
            else
                imageProcessor.addImage(inputImage.image, inputImage.name);
        }
        Array<Page> pages = packer.pack(imageProcessor.getImages());
        String scaledPackFileName = settings.getScaledPackFileName(packFileName, i);
        writeImages(outputDir, scaledPackFileName, pages);
        try {
            writePackFile(outputDir, scaledPackFileName, pages);
        } catch (IOException ex) {
            throw new RuntimeException("Error writing pack file.", ex);
        }
        imageProcessor.clear();
    }
}
