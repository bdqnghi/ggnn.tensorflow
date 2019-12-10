public void draw(Batch batch, float parentAlpha) {
    Stage stage = getStage();
    if (stage.getKeyboardFocus() == null)
        stage.setKeyboardFocus(this);
    keepWithinStage();
    if (style.stageBackground != null) {
        stageToLocalCoordinates(tmpPosition.set(0, 0));
        stageToLocalCoordinates(tmpSize.set(stage.getWidth(), stage.getHeight()));
        drawStageBackground(batch, parentAlpha, getX() + tmpPosition.x, getY() + tmpPosition.y, getX() + tmpSize.x, getY() + tmpSize.y);
    }
    super.draw(batch, parentAlpha);
}
