private void initialize(ApplicationListener listener, LwjglApplicationConfiguration config) {
    LwjglNativesLoader.load();
    canvas = new Canvas() {

        private final Dimension minSize = new Dimension(1, 1);

        public final void addNotify() {
            super.addNotify();
            if (SharedLibraryLoader.isMac) {
                EventQueue.invokeLater(new Runnable() {

                    public void run() {
                        create();
                    }
                });
            } else
                create();
        }

        public final void removeNotify() {
            stop();
            super.removeNotify();
        }

        public Dimension getMinimumSize() {
            return minSize;
        }
    };
    canvas.setSize(1, 1);
    canvas.setIgnoreRepaint(true);
    graphics = new LwjglGraphics(canvas, config) {

        public void setTitle(String title) {
            super.setTitle(title);
            LwjglCanvas.this.setTitle(title);
        }

        public boolean setDisplayMode(int width, int height, boolean fullscreen) {
            if (!super.setDisplayMode(width, height, fullscreen))
                return false;
            if (!fullscreen)
                LwjglCanvas.this.setDisplayMode(width, height);
            return true;
        }

        public boolean setDisplayMode(DisplayMode displayMode) {
            if (!super.setDisplayMode(displayMode))
                return false;
            LwjglCanvas.this.setDisplayMode(displayMode.width, displayMode.height);
            return true;
        }
    };
    graphics.setVSync(config.vSyncEnabled);
    if (!LwjglApplicationConfiguration.disableAudio)
        audio = new OpenALAudio();
    files = new LwjglFiles();
    input = new LwjglInput();
    net = new LwjglNet();
    this.listener = listener;
    Gdx.app = this;
    Gdx.graphics = graphics;
    Gdx.audio = audio;
    Gdx.files = files;
    Gdx.input = input;
    Gdx.net = net;
}
