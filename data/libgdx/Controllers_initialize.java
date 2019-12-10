static private void initialize() {
    if (managers.containsKey(Gdx.app))
        return;
    String className = null;
    ApplicationType type = Gdx.app.getType();
    ControllerManager manager = null;
    if (type == ApplicationType.Android) {
        if (Gdx.app.getVersion() >= 12) {
            className = "com.badlogic.gdx.controllers.android.AndroidControllers";
        } else {
            Gdx.app.log(TAG, "No controller manager is available for Android versions < API level 12");
            manager = new ControllerManagerStub();
        }
    } else if (type == ApplicationType.Desktop) {
        className = "com.badlogic.gdx.controllers.desktop.DesktopControllerManager";
    } else if (type == ApplicationType.WebGL) {
        className = "com.badlogic.gdx.controllers.gwt.GwtControllers";
    } else {
        Gdx.app.log(TAG, "No controller manager is available for: " + Gdx.app.getType());
        manager = new ControllerManagerStub();
    }
    if (manager == null) {
        try {
            Class controllerManagerClass = ClassReflection.forName(className);
            manager = (ControllerManager) ClassReflection.newInstance(controllerManagerClass);
        } catch (Throwable ex) {
            throw new GdxRuntimeException("Error creating controller manager: " + className, ex);
        }
    }
    managers.put(Gdx.app, manager);
    final Application app = Gdx.app;
    Gdx.app.addLifecycleListener(new LifecycleListener() {

        @Override
        public void resume() {
        }

        @Override
        public void pause() {
        }

        @Override
        public void dispose() {
            managers.remove(app);
            Gdx.app.log(TAG, "removed manager for application, " + managers.size + " managers active");
        }
    });
    Gdx.app.log(TAG, "added manager for application, " + managers.size + " managers active");
}
