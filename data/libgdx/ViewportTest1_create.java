public void create() {
    stage = new Stage();
    Skin skin = new Skin(Gdx.files.internal("data/uiskin.json"));
    label = new Label("", skin);
    Table root = new Table(skin);
    root.setFillParent(true);
    root.setBackground(skin.getDrawable("default-pane"));
    root.debug().defaults().space(6);
    root.add(new TextButton("Button 1", skin));
    root.add(new TextButton("Button 2", skin)).row();
    root.add("Press spacebar to change the viewport:").colspan(2).row();
    root.add(label).colspan(2);
    stage.addActor(root);
    viewports = getViewports(stage.getCamera());
    names = getViewportNames();
    stage.setViewport(viewports.first());
    label.setText(names.first());
    Gdx.input.setInputProcessor(new InputMultiplexer(new InputAdapter() {

        public boolean keyDown(int keycode) {
            if (keycode == Input.Keys.SPACE) {
                int index = (viewports.indexOf(stage.getViewport(), true) + 1) % viewports.size;
                label.setText(names.get(index));
                Viewport viewport = viewports.get(index);
                stage.setViewport(viewport);
                resize(Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
            }
            return false;
        }
    }, stage));
}
