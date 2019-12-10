Table label(String text) {
    Table table = new Table().debug();
    table.add(new Label(text, skin)).fill().expand();
    return table;
}
