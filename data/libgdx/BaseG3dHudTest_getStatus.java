protected void getStatus(final StringBuilder stringBuilder) {
    stringBuilder.append("FPS: ").append(Gdx.graphics.getFramesPerSecond());
    if (loading)
        stringBuilder.append(" loading...");
}
