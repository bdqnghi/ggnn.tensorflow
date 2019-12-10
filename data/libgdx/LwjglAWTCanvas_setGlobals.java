void setGlobals() {
    Gdx.app = this;
    if (audio != null)
        Gdx.audio = audio;
    if (files != null)
        Gdx.files = files;
    if (net != null)
        Gdx.net = net;
    Gdx.graphics = graphics;
    Gdx.input = input;
}
