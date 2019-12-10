void exit(final int exitCode) {
    rendererCanvas.stop();
    EventQueue.invokeLater(new Runnable() {

        public void run() {
            System.exit(exitCode);
        }
    });
}
