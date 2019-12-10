void setupPeripherals() {
    // motionManager = new CMMotionManager();
    setupAccelerometer();
    setupCompass();
    UIDevice device = UIDevice.getCurrentDevice();
    if (device.getModel().equalsIgnoreCase("iphone"))
        hasVibrator = true;
}
