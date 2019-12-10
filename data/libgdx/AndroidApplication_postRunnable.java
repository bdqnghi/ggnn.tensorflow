@Override
public void postRunnable(Runnable runnable) {
    synchronized (runnables) {
        runnables.add(runnable);
        Gdx.graphics.requestRendering();
    }
}
