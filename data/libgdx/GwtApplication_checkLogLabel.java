private void checkLogLabel() {
    if (log == null) {
        log = new TextArea();
        log.setSize(graphics.getWidth() + "px", "200px");
        log.setReadOnly(true);
        root.add(log);
    }
}
