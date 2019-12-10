@Override
public void pause() {
    inputManager.unregisterInputDeviceListener(this);
    Gdx.app.log(TAG, "controller life cycle listener paused");
}
