public void onResume() {
    Gdx.app = this;
    Gdx.input = input;
    Gdx.audio = audio;
    Gdx.files = files;
    Gdx.graphics = graphics;
    Gdx.net = net;
    input.onResume();
    if (graphics != null) {
        graphics.onResumeGLSurfaceView();
    }
    if (!firstResume) {
        audio.resume();
        graphics.resume();
    } else
        firstResume = false;
}
