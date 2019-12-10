@Override
protected IOSApplication createApplication() {
    IOSApplicationConfiguration config = new IOSApplicationConfiguration();
    config.useAccelerometer = false;
    return new IOSApplication(new AccelerometerTest(), config);
}
