public void addImage(BufferedImage image, String name) {
    InputImage inputImage = new InputImage();
    inputImage.image = image;
    inputImage.name = name;
    inputImages.add(inputImage);
}
