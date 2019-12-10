public void setImage(String file) {
    try {
        image = ImageIO.read(new File(file));
    } catch (IOException e) {
        e.printStackTrace();
    }
}
