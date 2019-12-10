/**
 * Kindly stolen from http://lwjgl.org/wiki/index.php?title=LWJGL_Basics_5_(Fullscreen), not perfect but will do.
 */
@Override
public boolean setDisplayMode(int width, int height, boolean fullscreen) {
    if (getWidth() == width && getHeight() == height && Display.isFullscreen() == fullscreen) {
        return true;
    }
    try {
        org.lwjgl.opengl.DisplayMode targetDisplayMode = null;
        if (fullscreen) {
            org.lwjgl.opengl.DisplayMode[] modes = Display.getAvailableDisplayModes();
            int freq = 0;
            for (int i = 0; i < modes.length; i++) {
                org.lwjgl.opengl.DisplayMode current = modes[i];
                if ((current.getWidth() == width) && (current.getHeight() == height)) {
                    if ((targetDisplayMode == null) || (current.getFrequency() >= freq)) {
                        if ((targetDisplayMode == null) || (current.getBitsPerPixel() > targetDisplayMode.getBitsPerPixel())) {
                            targetDisplayMode = current;
                            freq = targetDisplayMode.getFrequency();
                        }
                    }
                    // since it's most likely compatible with the monitor
                    if ((current.getBitsPerPixel() == Display.getDesktopDisplayMode().getBitsPerPixel()) && (current.getFrequency() == Display.getDesktopDisplayMode().getFrequency())) {
                        targetDisplayMode = current;
                        break;
                    }
                }
            }
        } else {
            targetDisplayMode = new org.lwjgl.opengl.DisplayMode(width, height);
        }
        if (targetDisplayMode == null) {
            return false;
        }
        boolean resizable = !fullscreen && config.resizable;
        Display.setDisplayMode(targetDisplayMode);
        Display.setFullscreen(fullscreen);
        // Workaround for bug in LWJGL whereby resizable state is lost on DisplayMode change
        if (resizable == Display.isResizable()) {
            Display.setResizable(!resizable);
        }
        Display.setResizable(resizable);
        float scaleFactor = Display.getPixelScaleFactor();
        config.width = (int) (targetDisplayMode.getWidth() * scaleFactor);
        config.height = (int) (targetDisplayMode.getHeight() * scaleFactor);
        if (Gdx.gl != null)
            Gdx.gl.glViewport(0, 0, config.width, config.height);
        resize = true;
        return true;
    } catch (LWJGLException e) {
        return false;
    }
}
