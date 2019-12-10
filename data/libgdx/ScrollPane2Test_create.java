public void create() {
    stage = new Stage();
    Gdx.input.setInputProcessor(stage);
    skin = new Skin(Gdx.files.internal("data/uiskin.json"));
    ScrollPane pane2 = new ScrollPane(new Image(new Texture("data/group-debug.png")), skin);
    pane2.setScrollingDisabled(false, true);
    // pane2.setCancelTouchFocus(false);
    pane2.addListener(new InputListener() {

        public boolean touchDown(InputEvent event, float x, float y, int pointer, int button) {
            event.stop();
            return true;
        }
    });
    Table mytable = new Table();
    mytable.debug();
    mytable.add(new Image(new Texture("data/group-debug.png")));
    mytable.row();
    mytable.add(new Image(new Texture("data/group-debug.png")));
    mytable.row();
    mytable.add(pane2).size(100);
    mytable.row();
    mytable.add(new Image(new Texture("data/group-debug.png")));
    mytable.row();
    mytable.add(new Image(new Texture("data/group-debug.png")));
    ScrollPane pane = new ScrollPane(mytable, skin);
    pane.setScrollingDisabled(true, false);
    // pane.setCancelTouchFocus(false);
    if (false) {
        // This sizes the pane to the size of it's contents.
        pane.pack();
        // Then the height is hardcoded, leaving the pane the width of it's contents.
        pane.setHeight(Gdx.graphics.getHeight());
    } else {
        // This shows a hardcoded size.
        pane.setWidth(300);
        pane.setHeight(Gdx.graphics.getHeight());
    }
    stage.addActor(pane);
}
