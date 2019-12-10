public static void main(String[] args) throws Exception {
    File file = new File(MAP_PATH);
    if (!file.exists()) {
        System.out.println("Please run TiledMapPackerTest.");
        return;
    }
    new LwjglApplication(new TiledMapPackerTestRender(), "", 640, 480);
}
