@Override
public void onDreamingStarted() {
    Gdx.app = this;
    Gdx.input = this.getInput();
    Gdx.audio = this.getAudio();
    Gdx.files = this.getFiles();
    Gdx.graphics = this.getGraphics();
    Gdx.net = this.getNet();
    getInput().registerSensorListeners();
    if (graphics != null) {
        graphics.onResumeGLSurfaceView();
    }
    if (!firstResume) {
        graphics.resume();
    } else
        firstResume = false;
    super.onDreamingStarted();
}
