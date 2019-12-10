private void createUI() {
    skin = new Skin(Gdx.files.internal("data/uiskin.json"));
    ui = new Stage();
    String[] filters = new String[TextureFilter.values().length];
    int idx = 0;
    for (TextureFilter filter : TextureFilter.values()) {
        filters[idx++] = filter.toString();
    }
    hwMipMap = new CheckBox("Hardware Mips", skin);
    minFilter = new SelectBox(skin);
    minFilter.setItems(filters);
    magFilter = new SelectBox(skin.get(SelectBoxStyle.class));
    magFilter.setItems("Nearest", "Linear");
    Table table = new Table();
    table.setSize(ui.getWidth(), 30);
    table.setY(ui.getHeight() - 30);
    table.add(hwMipMap).spaceRight(5);
    table.add(new Label("Min Filter", skin)).spaceRight(5);
    table.add(minFilter).spaceRight(5);
    table.add(new Label("Mag Filter", skin)).spaceRight(5);
    table.add(magFilter);
    ui.addActor(table);
}
