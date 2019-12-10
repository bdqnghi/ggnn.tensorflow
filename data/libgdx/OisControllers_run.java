public void run() {
    // we won't do the rather heavy check for a lost window handle each and every frame, but rather each second only
    long now = System.nanoTime();
    if (now - lastCheckForLostWindowHandleTime > CHECK_FOR_LOST_WINDOW_HANDLE_INTERVAL) {
        lastCheckForLostWindowHandleTime = now;
        long newWindowHandle = getWindowHandle();
        if (hwnd != newWindowHandle) {
            hwnd = newWindowHandle;
            ois = new Ois(newWindowHandle);
            ArrayList<OisJoystick> joysticks = ois.getJoysticks();
            controllers = new OisController[joysticks.size()];
            manager.controllers.clear();
            for (int i = 0, n = joysticks.size(); i < n; i++) {
                OisJoystick joystick = joysticks.get(i);
                controllers[i] = new OisController(joystick);
                manager.controllers.add(controllers[i]);
            }
        }
    }
    ois.update();
    Gdx.app.postRunnable(this);
}
