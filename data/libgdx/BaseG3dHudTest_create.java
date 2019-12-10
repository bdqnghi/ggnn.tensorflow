@Override
public void create() {
    super.create();
    createHUD();
    Gdx.input.setInputProcessor(new InputMultiplexer(hud, this, inputController));
}
