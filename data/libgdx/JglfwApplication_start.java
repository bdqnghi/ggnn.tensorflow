/**
 * Starts the game loop after the application internals have been initialized.
 */
protected void start() {
    listener.create();
    listener.resize(graphics.getWidth(), graphics.getHeight());
    if (runOnEDT) {
        new Runnable() {

            public void run() {
                frame();
                if (running)
                    EventQueue.invokeLater(this);
                else
                    end();
            }
        }.run();
    } else {
        while (running) frame();
        end();
    }
}
