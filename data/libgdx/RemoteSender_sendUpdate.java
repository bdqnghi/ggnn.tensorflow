public void sendUpdate() {
    synchronized (this) {
        if (!connected)
            return;
    }
    try {
        out.writeInt(ACCEL);
        out.writeFloat(Gdx.input.getAccelerometerX());
        out.writeFloat(Gdx.input.getAccelerometerY());
        out.writeFloat(Gdx.input.getAccelerometerZ());
        out.writeInt(COMPASS);
        out.writeFloat(Gdx.input.getAzimuth());
        out.writeFloat(Gdx.input.getPitch());
        out.writeFloat(Gdx.input.getRoll());
        out.writeInt(SIZE);
        out.writeFloat(Gdx.graphics.getWidth());
        out.writeFloat(Gdx.graphics.getHeight());
    } catch (Throwable t) {
        out = null;
        connected = false;
    }
}
