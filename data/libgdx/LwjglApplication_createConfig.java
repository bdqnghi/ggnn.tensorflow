private static LwjglApplicationConfiguration createConfig(String title, int width, int height) {
    LwjglApplicationConfiguration config = new LwjglApplicationConfiguration();
    config.title = title;
    config.width = width;
    config.height = height;
    config.vSyncEnabled = true;
    return config;
}
