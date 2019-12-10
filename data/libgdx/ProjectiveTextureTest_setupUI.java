public void setupUI() {
    ui = new Stage();
    skin = new Skin(Gdx.files.internal("data/uiskin.json"));
    TextButton reload = new TextButton("Reload Shaders", skin.get(TextButtonStyle.class));
    camera = new SelectBox(skin.get(SelectBoxStyle.class));
    camera.setItems("Camera", "Light");
    fps = new Label("fps: ", skin.get(LabelStyle.class));
    Table table = new Table();
    table.setFillParent(true);
    table.top().padTop(15);
    table.add(reload).spaceRight(5);
    table.add(camera).spaceRight(5);
    table.add(fps);
    ui.addActor(table);
    reload.addListener(new ClickListener() {

        public void clicked(InputEvent event, float x, float y) {
            ShaderProgram prog = new ShaderProgram(Gdx.files.internal("data/shaders/projtex-vert.glsl").readString(), Gdx.files.internal("data/shaders/projtex-frag.glsl").readString());
            if (prog.isCompiled() == false) {
                Gdx.app.log("GLSL ERROR", "Couldn't reload shaders:\n" + prog.getLog());
            } else {
                projTexShader.dispose();
                projTexShader = prog;
            }
        }
    });
}
