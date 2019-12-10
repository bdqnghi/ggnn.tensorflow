@Override
public void onInputDeviceRemoved(int deviceId) {
    controllers.removeController(deviceId);
    Gdx.app.log(TAG, "device " + deviceId + " removed");
}
