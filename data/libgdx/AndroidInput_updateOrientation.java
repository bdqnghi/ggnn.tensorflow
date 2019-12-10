private void updateOrientation() {
    if (SensorManager.getRotationMatrix(R, null, accelerometerValues, magneticFieldValues)) {
        SensorManager.getOrientation(R, orientation);
        azimuth = (float) Math.toDegrees(orientation[0]);
        pitch = (float) Math.toDegrees(orientation[1]);
        roll = (float) Math.toDegrees(orientation[2]);
    }
}
