public BufferedImage getImage(ImageProcessor imageProcessor) {
    if (image != null)
        return image;
    BufferedImage image;
    try {
        image = ImageIO.read(file);
    } catch (IOException ex) {
        throw new RuntimeException("Error reading image: " + file, ex);
    }
    if (image == null)
        throw new RuntimeException("Unable to read image: " + file);
    String name = this.name;
    if (isPatch)
        name += ".9";
    return imageProcessor.processImage(image, name).getImage(null);
}
