private void initialize() {
    mainLoopThread = new Thread("HeadlessApplication") {

        @Override
        public void run() {
            try {
                HeadlessApplication.this.mainLoop();
            } catch (Throwable t) {
                if (t instanceof RuntimeException)
                    throw (RuntimeException) t;
                else
                    throw new GdxRuntimeException(t);
            }
        }
    };
    mainLoopThread.start();
}
