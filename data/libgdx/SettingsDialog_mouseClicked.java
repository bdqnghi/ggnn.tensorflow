public void mouseClicked(MouseEvent e) {
    if (e.getClickCount() > 0) {
        if (Desktop.isDesktopSupported()) {
            Desktop desktop = Desktop.getDesktop();
            try {
                URI uri = new URI("https://github.com/libgdx/libgdx/wiki/Improving-workflow-with-Gradle#how-to-remove-gradle-ide-integration-from-your-project");
                desktop.browse(uri);
            } catch (IOException ex) {
                ex.printStackTrace();
            } catch (URISyntaxException ex) {
                ex.printStackTrace();
            }
        }
    }
}
