@Override
public void onSensorChanged(SensorEvent event) {
    if (event.sensor.getType() == Sensor.TYPE_ACCELEROMETER) {
        if (nativeOrientation == Orientation.Portrait) {
            System.arraycopy(event.values, 0, accelerometerValues, 0, accelerometerValues.length);
        } else {
            accelerometerValues[0] = event.values[1];
            accelerometerValues[1] = -event.values[0];
            accelerometerValues[2] = event.values[2];
        }
    }
    if (event.sensor.getType() == Sensor.TYPE_MAGNETIC_FIELD) {
        System.arraycopy(event.values, 0, magneticFieldValues, 0, magneticFieldValues.length);
    }
}
