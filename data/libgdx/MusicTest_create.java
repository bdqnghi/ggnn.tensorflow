@Override
public void create() {
    music = Gdx.audio.newMusic(Gdx.files.internal("data/8.12.mp3"));
    music.play();
    buttons = new TextureRegion(new Texture(Gdx.files.internal("data/playback.png")));
    batch = new SpriteBatch();
    font = new BitmapFont(Gdx.files.internal("data/arial-15.fnt"), false);
    stage = new Stage();
    Skin skin = new Skin(Gdx.files.internal("data/uiskin.json"));
    slider = new Slider(0, 100, 0.1f, false, skin);
    slider.setPosition(200, 20);
    slider.addListener(new ChangeListener() {

        @Override
        public void changed(ChangeEvent event, Actor actor) {
            if (!sliderUpdating && slider.isDragging())
                music.setPosition((slider.getValue() / 100f) * songDuration);
        }
    });
    stage.addActor(slider);
    Gdx.input.setInputProcessor(stage);
}
