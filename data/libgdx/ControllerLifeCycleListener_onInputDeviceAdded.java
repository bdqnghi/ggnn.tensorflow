@Override
public void onInputDeviceAdded(int deviceId) {
    controllers.addController(deviceId, true);
    Gdx.app.log(TAG, "device " + deviceId + " added");
}
