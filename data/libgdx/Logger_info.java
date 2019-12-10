public void info(String message, Exception exception) {
    if (level >= INFO)
        Gdx.app.log(tag, message, exception);
}
