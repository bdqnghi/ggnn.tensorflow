void setupDisplay() throws LWJGLException {
    if (config.useHDPI) {
        System.setProperty("org.lwjgl.opengl.Display.enableHighDPI", "true");
    }
    if (canvas != null) {
        Display.setParent(canvas);
    } else {
        boolean displayCreated = setDisplayMode(config.width, config.height, config.fullscreen);
        if (!displayCreated) {
            if (config.setDisplayModeCallback != null) {
                config = config.setDisplayModeCallback.onFailure(config);
                if (config != null) {
                    displayCreated = setDisplayMode(config.width, config.height, config.fullscreen);
                }
            }
            if (!displayCreated) {
                throw new GdxRuntimeException("Couldn't set display mode " + config.width + "x" + config.height + ", fullscreen: " + config.fullscreen);
            }
        }
        if (config.iconPaths.size > 0) {
            ByteBuffer[] icons = new ByteBuffer[config.iconPaths.size];
            for (int i = 0, n = config.iconPaths.size; i < n; i++) {
                Pixmap pixmap = new Pixmap(Gdx.files.getFileHandle(config.iconPaths.get(i), config.iconFileTypes.get(i)));
                if (pixmap.getFormat() != Format.RGBA8888) {
                    Pixmap rgba = new Pixmap(pixmap.getWidth(), pixmap.getHeight(), Format.RGBA8888);
                    rgba.drawPixmap(pixmap, 0, 0);
                    pixmap = rgba;
                }
                icons[i] = ByteBuffer.allocateDirect(pixmap.getPixels().limit());
                icons[i].put(pixmap.getPixels()).flip();
                pixmap.dispose();
            }
            Display.setIcon(icons);
        }
    }
    Display.setTitle(config.title);
    Display.setResizable(config.resizable);
    Display.setInitialBackground(config.initialBackgroundColor.r, config.initialBackgroundColor.g, config.initialBackgroundColor.b);
    Display.setLocation(config.x, config.y);
    createDisplayPixelFormat(config.useGL30, config.gles30ContextMajorVersion, config.gles30ContextMinorVersion);
    initiateGL();
}
