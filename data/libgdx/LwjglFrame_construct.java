private void construct(ApplicationListener listener, LwjglApplicationConfiguration config) {
    lwjglCanvas = new LwjglCanvas(listener, config) {

        protected void stopped() {
            LwjglFrame.this.dispose();
        }

        protected void setTitle(String title) {
            LwjglFrame.this.setTitle(title);
        }

        protected void setDisplayMode(int width, int height) {
            LwjglFrame.this.getContentPane().setPreferredSize(new Dimension(width, height));
            LwjglFrame.this.getContentPane().invalidate();
            LwjglFrame.this.pack();
            LwjglFrame.this.setLocationRelativeTo(null);
            updateSize(width, height);
        }

        protected void resize(int width, int height) {
            updateSize(width, height);
        }

        protected void start() {
            LwjglFrame.this.start();
        }

        protected void exception(Throwable t) {
            LwjglFrame.this.exception(t);
        }

        protected int getFrameRate() {
            int frameRate = LwjglFrame.this.getFrameRate();
            return frameRate == 0 ? super.getFrameRate() : frameRate;
        }
    };
    setHaltOnShutdown(true);
    setDefaultCloseOperation(EXIT_ON_CLOSE);
    getContentPane().setPreferredSize(new Dimension(config.width, config.height));
    initialize();
    pack();
    Point location = getLocation();
    if (location.x == 0 && location.y == 0)
        setLocationRelativeTo(null);
    lwjglCanvas.getCanvas().setSize(getSize());
    // Finish with invokeLater so any LwjglFrame super constructor has a chance to initialize.
    EventQueue.invokeLater(new Runnable() {

        public void run() {
            addCanvas();
            setVisible(true);
            lwjglCanvas.getCanvas().requestFocus();
        }
    });
}
