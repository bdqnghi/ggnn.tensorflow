private void createDisplayPixelFormat(boolean useGL30, int gles30ContextMajor, int gles30ContextMinor) {
    try {
        if (useGL30) {
            ContextAttribs context = new ContextAttribs(gles30ContextMajor, gles30ContextMinor).withForwardCompatible(false).withProfileCore(true);
            try {
                Display.create(new PixelFormat(config.r + config.g + config.b, config.a, config.depth, config.stencil, config.samples), context);
            } catch (Exception e) {
                System.out.println("LwjglGraphics: OpenGL " + gles30ContextMajor + "." + gles30ContextMinor + "+ core profile (GLES 3.0) not supported.");
                createDisplayPixelFormat(false, gles30ContextMajor, gles30ContextMinor);
                return;
            }
            System.out.println("LwjglGraphics: created OpenGL " + gles30ContextMajor + "." + gles30ContextMinor + "+ core profile (GLES 3.0) context. This is experimental!");
            usingGL30 = true;
        } else {
            Display.create(new PixelFormat(config.r + config.g + config.b, config.a, config.depth, config.stencil, config.samples));
            usingGL30 = false;
        }
        bufferFormat = new BufferFormat(config.r, config.g, config.b, config.a, config.depth, config.stencil, config.samples, false);
    } catch (Exception ex) {
        Display.destroy();
        try {
            Thread.sleep(200);
        } catch (InterruptedException ignored) {
        }
        try {
            Display.create(new PixelFormat(0, 16, 8));
            if (getDesktopDisplayMode().bitsPerPixel == 16) {
                bufferFormat = new BufferFormat(5, 6, 5, 0, 16, 8, 0, false);
            }
            if (getDesktopDisplayMode().bitsPerPixel == 24) {
                bufferFormat = new BufferFormat(8, 8, 8, 0, 16, 8, 0, false);
            }
            if (getDesktopDisplayMode().bitsPerPixel == 32) {
                bufferFormat = new BufferFormat(8, 8, 8, 8, 16, 8, 0, false);
            }
        } catch (Exception ex2) {
            Display.destroy();
            try {
                Thread.sleep(200);
            } catch (InterruptedException ignored) {
            }
            try {
                Display.create(new PixelFormat());
            } catch (Exception ex3) {
                if (!softwareMode && config.allowSoftwareMode) {
                    softwareMode = true;
                    System.setProperty("org.lwjgl.opengl.Display.allowSoftwareOpenGL", "true");
                    createDisplayPixelFormat(useGL30, gles30ContextMajor, gles30ContextMinor);
                    return;
                }
                String glInfo = glInfo();
                throw new GdxRuntimeException("OpenGL is not supported by the video driver" + (glInfo.isEmpty() ? "." : (":" + glInfo())), ex3);
            }
            if (getDesktopDisplayMode().bitsPerPixel == 16) {
                bufferFormat = new BufferFormat(5, 6, 5, 0, 8, 0, 0, false);
            }
            if (getDesktopDisplayMode().bitsPerPixel == 24) {
                bufferFormat = new BufferFormat(8, 8, 8, 0, 8, 0, 0, false);
            }
            if (getDesktopDisplayMode().bitsPerPixel == 32) {
                bufferFormat = new BufferFormat(8, 8, 8, 8, 8, 0, 0, false);
            }
        }
    }
}
