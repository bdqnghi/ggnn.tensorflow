static private JglfwApplicationConfiguration createConfig(String title, int width, int height) {
    JglfwApplicationConfiguration config = new JglfwApplicationConfiguration();
    config.title = title;
    config.width = width;
    config.height = height;
    return config;
}
