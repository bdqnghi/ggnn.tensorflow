@Override
public void render() {
    if (Gdx.input.justTouched()) {
        expectIt = true;
        Gdx.app.postRunnable(new Runnable() {

            @Override
            public void run() {
                throw new RuntimeException("This is a test of the uncaught exception handler.");
            }
        });
    }
}
