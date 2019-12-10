@Override
public boolean openURI(String URI) {
    boolean result = false;
    try {
        if (!GraphicsEnvironment.isHeadless() && Desktop.isDesktopSupported()) {
            if (Desktop.getDesktop().isSupported(Action.BROWSE)) {
                Desktop.getDesktop().browse(java.net.URI.create(URI));
                result = true;
            }
        } else {
            Gdx.app.error("HeadlessNet", "Opening URIs on this environment is not supported. Ignoring.");
        }
    } catch (Throwable t) {
        Gdx.app.error("HeadlessNet", "Failed to open URI. ", t);
    }
    return result;
}
