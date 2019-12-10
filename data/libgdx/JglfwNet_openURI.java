public boolean openURI(String uri) {
    boolean result = false;
    if (Desktop.isDesktopSupported()) {
        Desktop desktop = Desktop.getDesktop();
        if (desktop.isSupported(Desktop.Action.BROWSE)) {
            try {
                desktop.browse(new URI(uri));
                result = true;
            } catch (Exception e) {
                Gdx.app.error("JglfwNet", "Unable to open URI:" + uri, e);
            }
        }
    }
    return result;
}
