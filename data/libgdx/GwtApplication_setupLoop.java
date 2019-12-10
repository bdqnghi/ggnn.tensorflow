void setupLoop() {
    // setup modules
    try {
        graphics = new GwtGraphics(root, config);
    } catch (Throwable e) {
        root.clear();
        root.add(new Label("Sorry, your browser doesn't seem to support WebGL"));
        return;
    }
    lastWidth = graphics.getWidth();
    lastHeight = graphics.getHeight();
    Gdx.app = this;
    Gdx.audio = new GwtAudio();
    Gdx.graphics = graphics;
    Gdx.gl20 = graphics.getGL20();
    Gdx.gl = Gdx.gl20;
    Gdx.files = new GwtFiles(preloader);
    this.input = new GwtInput(graphics.canvas);
    Gdx.input = this.input;
    this.net = new GwtNet();
    Gdx.net = this.net;
    this.clipboard = new GwtClipboard();
    // tell listener about app creation
    try {
        listener.create();
        listener.resize(graphics.getWidth(), graphics.getHeight());
    } catch (Throwable t) {
        error("GwtApplication", "exception: " + t.getMessage(), t);
        t.printStackTrace();
        throw new RuntimeException(t);
    }
    AnimationScheduler.get().requestAnimationFrame(new AnimationCallback() {

        @Override
        public void execute(double timestamp) {
            try {
                mainLoop();
            } catch (Throwable t) {
                error("GwtApplication", "exception: " + t.getMessage(), t);
                throw new RuntimeException(t);
            }
            AnimationScheduler.get().requestAnimationFrame(this, graphics.canvas);
        }
    }, graphics.canvas);
}
