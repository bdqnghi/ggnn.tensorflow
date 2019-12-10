@Override
public void onDrawFrame(javax.microedition.khronos.opengles.GL10 gl) {
    long time = System.nanoTime();
    deltaTime = (time - lastFrameTime) / 1000000000.0f;
    lastFrameTime = time;
    // After pause deltaTime can have somewhat huge value that destabilizes the mean, so let's cut it off
    if (!resume) {
        mean.addValue(deltaTime);
    } else {
        deltaTime = 0;
    }
    boolean lrunning = false;
    boolean lpause = false;
    boolean ldestroy = false;
    boolean lresume = false;
    synchronized (synch) {
        lrunning = running;
        lpause = pause;
        ldestroy = destroy;
        lresume = resume;
        if (resume) {
            resume = false;
            // by jw: originally was not synchronized
            synch.notifyAll();
        }
        if (pause) {
            pause = false;
            synch.notifyAll();
        }
        if (destroy) {
            destroy = false;
            synch.notifyAll();
        }
    }
    if (lresume) {
        // ((AndroidAudio)app.getAudio()).resume(); // jw: moved to AndroidLiveWallpaper.onResume
        app.getApplicationListener().resume();
        Gdx.app.log("AndroidGraphics", "resumed");
    }
    // jw: now it shouldn't be necessary - after wallpaper backend refactoring:)
    if (lrunning) {
        // jw: changed
        synchronized (app.getRunnables()) {
            app.getExecutedRunnables().clear();
            app.getExecutedRunnables().addAll(app.getRunnables());
            app.getRunnables().clear();
            for (int i = 0; i < app.getExecutedRunnables().size; i++) {
                try {
                    app.getExecutedRunnables().get(i).run();
                } catch (Throwable t) {
                    t.printStackTrace();
                }
            }
        }
        /*
			 * synchronized (app.runnables) { for (int i = 0; i < app.runnables.size; i++) { app.runnables.get(i).run(); }
			 * app.runnables.clear(); }
			 */
        app.getInput().processEvents();
        frameId++;
        app.getApplicationListener().render();
    }
    // jw: never called on lvp, why? see description in AndroidLiveWallpaper.onPause
    if (lpause) {
        app.getApplicationListener().pause();
        // ((AndroidAudio)app.getAudio()).pause(); jw: moved to AndroidLiveWallpaper.onPause
        Gdx.app.log("AndroidGraphics", "paused");
    }
    // jw: never called on lwp, why? see description in AndroidLiveWallpaper.onPause
    if (ldestroy) {
        app.getApplicationListener().dispose();
        // ((AndroidAudio)app.getAudio()).dispose(); jw: moved to AndroidLiveWallpaper.onDestroy
        Gdx.app.log("AndroidGraphics", "destroyed");
    }
    if (time - frameStart > 1000000000) {
        fps = frames;
        frames = 0;
        frameStart = time;
    }
    frames++;
}
