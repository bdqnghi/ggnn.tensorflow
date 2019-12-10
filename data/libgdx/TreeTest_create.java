public void create() {
    stage = new Stage();
    Gdx.input.setInputProcessor(stage);
    Skin skin = new Skin(Gdx.files.internal("data/uiskin.json"));
    Table table = new Table();
    table.setFillParent(true);
    stage.addActor(table);
    final Tree tree = new Tree(skin);
    final Node moo1 = new Node(new TextButton("moo1", skin));
    final Node moo2 = new Node(new TextButton("moo2", skin));
    final Node moo3 = new Node(new TextButton("moo3", skin));
    final Node moo4 = new Node(new TextButton("moo4", skin));
    final Node moo5 = new Node(new TextButton("moo5", skin));
    tree.add(moo1);
    tree.add(moo2);
    moo2.add(moo3);
    moo3.add(moo4);
    tree.add(moo5);
    moo5.getActor().addListener(new ClickListener() {

        public void clicked(InputEvent event, float x, float y) {
            tree.remove(moo4);
        }
    });
    table.add(tree).fill().expand();
}
