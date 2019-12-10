void unregisterSensorListeners() {
    if (manager != null) {
        if (accelerometerListener != null) {
            manager.unregisterListener(accelerometerListener);
            accelerometerListener = null;
        }
        if (compassListener != null) {
            manager.unregisterListener(compassListener);
            compassListener = null;
        }
        manager = null;
    }
    Gdx.app.log("AndroidInput", "sensor listener tear down");
}
