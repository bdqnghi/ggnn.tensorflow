@Override
protected void onResume() {
    Gdx.app = this;
    Gdx.input = this.getInput();
    Gdx.audio = this.getAudio();
    Gdx.files = this.getFiles();
    Gdx.graphics = this.getGraphics();
    Gdx.net = this.getNet();
    input.onResume();
    if (graphics != null) {
        graphics.onResumeGLSurfaceView();
    }
    if (!firstResume) {
        graphics.resume();
    } else
        firstResume = false;
    this.isWaitingForAudio = true;
    if (this.wasFocusChanged == 1 || this.wasFocusChanged == -1) {
        this.audio.resume();
        this.isWaitingForAudio = false;
    }
    super.onResume();
}
