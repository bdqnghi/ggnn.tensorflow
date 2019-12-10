void registerSensorListeners() {
    if (config.useAccelerometer) {
        manager = (SensorManager) context.getSystemService(Context.SENSOR_SERVICE);
        if (manager.getSensorList(Sensor.TYPE_ACCELEROMETER).size() == 0) {
            accelerometerAvailable = false;
        } else {
            Sensor accelerometer = manager.getSensorList(Sensor.TYPE_ACCELEROMETER).get(0);
            accelerometerListener = new SensorListener(this.nativeOrientation, this.accelerometerValues, this.magneticFieldValues);
            accelerometerAvailable = manager.registerListener(accelerometerListener, accelerometer, SensorManager.SENSOR_DELAY_GAME);
        }
    } else
        accelerometerAvailable = false;
    if (config.useCompass) {
        if (manager == null)
            manager = (SensorManager) context.getSystemService(Context.SENSOR_SERVICE);
        Sensor sensor = manager.getDefaultSensor(Sensor.TYPE_MAGNETIC_FIELD);
        if (sensor != null) {
            compassAvailable = accelerometerAvailable;
            if (compassAvailable) {
                compassListener = new SensorListener(this.nativeOrientation, this.accelerometerValues, this.magneticFieldValues);
                compassAvailable = manager.registerListener(compassListener, sensor, SensorManager.SENSOR_DELAY_GAME);
            }
        } else {
            compassAvailable = false;
        }
    } else
        compassAvailable = false;
    Gdx.app.log("AndroidInput", "sensor listener setup");
}
