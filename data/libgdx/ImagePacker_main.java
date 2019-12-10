public static void main(String[] argv) throws IOException {
    Random rand = new Random(0);
    ImagePacker packer = new ImagePacker(512, 512, 1, true);
    BufferedImage[] images = new BufferedImage[100];
    for (int i = 0; i < images.length; i++) {
        Color color = new Color((float) Math.random(), (float) Math.random(), (float) Math.random(), 1);
        images[i] = createImage(rand.nextInt(50) + 10, rand.nextInt(50) + 10, color);
    }
    // BufferedImage[] images = { ImageIO.read( new File( "test.png" ) ) };
    Arrays.sort(images, new Comparator<BufferedImage>() {

        @Override
        public int compare(BufferedImage o1, BufferedImage o2) {
            return o2.getWidth() * o2.getHeight() - o1.getWidth() * o1.getHeight();
        }
    });
    for (int i = 0; i < images.length; i++) packer.insertImage("" + i, images[i]);
    ImageIO.write(packer.getImage(), "png", new File("packed.png"));
}
