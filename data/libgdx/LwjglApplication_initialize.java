private void initialize() {
    mainLoopThread = new Thread("LWJGL Application") {

        @Override
        public void run() {
            graphics.setVSync(graphics.config.vSyncEnabled);
            try {
                LwjglApplication.this.mainLoop();
            } catch (Throwable t) {
                if (audio != null)
                    audio.dispose();
                Gdx.input.setCursorCatched(false);
                if (t instanceof RuntimeException)
                    throw (RuntimeException) t;
                else
                    throw new GdxRuntimeException(t);
            }
        }
    };
    mainLoopThread.start();
}
