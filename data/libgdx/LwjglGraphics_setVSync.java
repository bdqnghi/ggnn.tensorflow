@Override
public void setVSync(boolean vsync) {
    this.vsync = vsync;
    Display.setVSyncEnabled(vsync);
}
