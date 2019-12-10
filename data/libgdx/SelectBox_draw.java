public void draw(Batch batch, float parentAlpha) {
    selectBox.localToStageCoordinates(temp.set(0, 0));
    if (!temp.equals(screenPosition))
        hide();
    super.draw(batch, parentAlpha);
}
