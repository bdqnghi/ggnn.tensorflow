@Override
public void create() {
    if (app == null) {
        app = Gdx.app;
        tests[testIndex].create();
    }
    cameraController = new CameraInputController(tests[testIndex].camera);
    cameraController.activateKey = Keys.CONTROL_LEFT;
    cameraController.autoUpdate = false;
    cameraController.forwardTarget = false;
    cameraController.translateTarget = false;
    Gdx.input.setInputProcessor(new InputMultiplexer(cameraController, this, new GestureDetector(this)));
    font = new BitmapFont(Gdx.files.internal("data/arial-15.fnt"), false);
    hud = new Stage();
    hud.addActor(fpsLabel = new Label(" ", new Label.LabelStyle(font, Color.WHITE)));
    fpsLabel.setPosition(0, 0);
    hud.addActor(titleLabel = new Label(tests[testIndex].getClass().getSimpleName(), new Label.LabelStyle(font, Color.WHITE)));
    titleLabel.setY(hud.getHeight() - titleLabel.getHeight());
    hud.addActor(instructLabel = new Label("A\nB\nC\nD\nE\nF", new Label.LabelStyle(font, Color.WHITE)));
    instructLabel.setY(titleLabel.getY() - instructLabel.getHeight());
    instructLabel.setAlignment(Align.top | Align.left);
    instructLabel.setText(tests[testIndex].instructions);
}
