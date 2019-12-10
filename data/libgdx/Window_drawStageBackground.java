protected void drawStageBackground(Batch batch, float parentAlpha, float x, float y, float width, float height) {
    Color color = getColor();
    batch.setColor(color.r, color.g, color.b, color.a * parentAlpha);
    style.stageBackground.draw(batch, x, y, width, height);
}
