public void clicked(InputEvent event, float x, float y) {
    selectBox.selection.choose(list.getSelected());
    hide();
}
