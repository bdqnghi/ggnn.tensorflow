void initialize(JglfwApplicationConfiguration config) {
    forceExit = config.forceExit;
    runOnEDT = config.runOnEDT;
    foregroundFPS = config.foregroundFPS;
    backgroundFPS = config.backgroundFPS;
    hiddenFPS = config.hiddenFPS;
    preferencesdir = config.preferencesLocation;
    final Thread glThread = Thread.currentThread();
    GdxNativesLoader.load();
    boolean inputCallbacksOnAppKitThread = isMac;
    // Ensure AWT is initialized before GLFW.
    if (inputCallbacksOnAppKitThread)
        java.awt.Toolkit.getDefaultToolkit();
    if (!glfwInit())
        throw new GdxRuntimeException("Unable to initialize GLFW.");
    Gdx.app = this;
    Gdx.graphics = graphics = new JglfwGraphics(config);
    Gdx.files = files = new JglfwFiles();
    Gdx.input = input = new JglfwInput(this, inputCallbacksOnAppKitThread);
    Gdx.net = net = new JglfwNet();
    callbacks.add(new GlfwCallbackAdapter() {

        public void windowSize(long window, final int width, final int height) {
            Runnable runnable = new Runnable() {

                public void run() {
                    graphics.sizeChanged(width, height);
                }
            };
            if (Thread.currentThread() != glThread)
                postRunnable(runnable);
            else
                runnable.run();
        }

        public void windowPos(long window, final int x, final int y) {
            Runnable runnable = new Runnable() {

                public void run() {
                    graphics.positionChanged(x, y);
                }
            };
            if (Thread.currentThread() != glThread)
                postRunnable(runnable);
            else
                runnable.run();
        }

        public void windowRefresh(long window) {
            if (Thread.currentThread() == glThread)
                render(System.nanoTime());
        }

        public void windowFocus(long window, boolean focused) {
            graphics.foreground = focused;
            graphics.requestRendering();
        }

        public void windowIconify(long window, boolean iconified) {
            graphics.minimized = iconified;
        }

        public boolean windowClose(long window) {
            if (shouldExit())
                exit();
            return false;
        }

        public void error(int error, String description) {
            throw new GdxRuntimeException("GLFW error " + error + ": " + description);
        }
    });
    glfwSetCallback(callbacks);
    start();
}
