protected void createHUD() {
    hud = new Stage(new ScalingViewport(Scaling.fit, PREF_HUDWIDTH, PREF_HUDHEIGHT));
    hudWidth = hud.getWidth();
    hudHeight = hud.getHeight();
    skin = new Skin(Gdx.files.internal("data/uiskin.json"));
    final List<String> modelsList = new List(skin);
    modelsList.setItems(models);
    modelsList.addListener(new ClickListener() {

        @Override
        public void clicked(InputEvent event, float x, float y) {
            if (!modelsWindow.isCollapsed() && getTapCount() == 2) {
                onModelClicked(modelsList.getSelected());
                modelsWindow.collapse();
            }
        }
    });
    modelsWindow = addListWindow("Models", modelsList, 0, -1);
    fpsLabel = new Label("FPS: 999", skin);
    hud.addActor(fpsLabel);
    gridCheckBox = new CheckBox("Show grid", skin);
    gridCheckBox.setChecked(showAxes);
    gridCheckBox.addListener(new ChangeListener() {

        @Override
        public void changed(ChangeEvent event, Actor actor) {
            showAxes = gridCheckBox.isChecked();
        }
    });
    gridCheckBox.setPosition(hudWidth - gridCheckBox.getWidth(), 0);
    hud.addActor(gridCheckBox);
    rotateCheckBox = new CheckBox("Rotate", skin);
    rotateCheckBox.setChecked(true);
    rotateCheckBox.setPosition(hudWidth - rotateCheckBox.getWidth(), gridCheckBox.getHeight());
    hud.addActor(rotateCheckBox);
    moveCheckBox = new CheckBox("Move", skin);
    moveCheckBox.setChecked(false);
    moveCheckBox.setPosition(hudWidth - moveCheckBox.getWidth(), rotateCheckBox.getTop());
    hud.addActor(moveCheckBox);
}
