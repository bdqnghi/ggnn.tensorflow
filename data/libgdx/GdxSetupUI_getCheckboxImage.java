private static BufferedImage getCheckboxImage(String imageName) throws IOException {
    return ImageIO.read(GdxSetupUI.class.getResourceAsStream("/com/badlogic/gdx/setup/data/" + imageName + ".png"));
}
