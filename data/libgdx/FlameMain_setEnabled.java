public void setEnabled(int emitterIndex, boolean enabled) {
    ControllerData data = controllersData.get(emitterIndex);
    data.enabled = enabled;
    rebuildActiveControllers();
}
