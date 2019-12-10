private void setupAccelerometer() {
    if (config.useAccelerometer) {
        accelerometerDelegate = new UIAccelerometerDelegateAdapter() {

            @Method(selector = "accelerometer:didAccelerate:")
            public void didAccelerate(UIAccelerometer accelerometer, @Pointer long valuesPtr) {
                UIAcceleration values = UI_ACCELERATION_WRAPPER.wrap(valuesPtr);
                float x = (float) values.getX() * 10;
                float y = (float) values.getY() * 10;
                float z = (float) values.getZ() * 10;
                acceleration[0] = -x;
                acceleration[1] = -y;
                acceleration[2] = -z;
            }
        };
        UIAccelerometer.getSharedAccelerometer().setDelegate(accelerometerDelegate);
        UIAccelerometer.getSharedAccelerometer().setUpdateInterval(config.accelerometerUpdate);
    }
}
