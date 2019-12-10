/**
 * Returns the window handle from LWJGL needed by OIS.
 */
static public long getWindowHandle() {
    // don't need a window handle for Mac OS X
    if (IS_MAC) {
        return 0;
    }
    try {
        if (Gdx.graphics.getType() == GraphicsType.JGLFW)
            return (Long) Gdx.graphics.getClass().getDeclaredMethod("getWindow").invoke(null);
        if (Gdx.graphics.getType() == GraphicsType.LWJGL) {
            if (Gdx.app.getClass().getName().equals("com.badlogic.gdx.backends.lwjgl.LwjglCanvas")) {
                Class canvasClass = Class.forName("com.badlogic.gdx.backends.lwjgl.LwjglCanvas");
                Object canvas = canvasClass.getDeclaredMethod("getCanvas").invoke(Gdx.app);
                return (Long) invokeMethod(invokeMethod(SwingUtilities.windowForComponent((Component) canvas), "getPeer"), "getHWnd");
            }
            Class displayClass = Class.forName("org.lwjgl.opengl.Display");
            Method getImplementation = displayClass.getDeclaredMethod("getImplementation", new Class[0]);
            getImplementation.setAccessible(true);
            Object display = getImplementation.invoke(null, (Object[]) null);
            Field field = display.getClass().getDeclaredField(IS_WINDOWS ? "hwnd" : "parent_window");
            field.setAccessible(true);
            return (Long) field.get(display);
        }
    } catch (Exception ex) {
        throw new RuntimeException("Unable to get window handle.", ex);
    }
    return 0;
}
