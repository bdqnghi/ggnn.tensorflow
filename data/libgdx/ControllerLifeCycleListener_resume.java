@Override
public void resume() {
    inputManager.registerInputDeviceListener(this, ((AndroidApplication) Gdx.app).handler);
    Gdx.app.log(TAG, "controller life cycle listener resumed");
}
