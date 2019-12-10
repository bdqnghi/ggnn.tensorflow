public final void addNotify() {
    super.addNotify();
    app = new LwjglAppletApplication(listener, canvas);
}
