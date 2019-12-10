@Override
public void create() {
    setupScene();
    setupUI();
    setupShaders();
    multiplexer.addProcessor(ui);
    multiplexer.addProcessor(controller);
    Gdx.input.setInputProcessor(multiplexer);
// renderer = new ImmediateModeRenderer20(false, true, 0);
}
