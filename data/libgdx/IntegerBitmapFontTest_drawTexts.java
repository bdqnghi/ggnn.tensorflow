private void drawTexts() {
    String text = "This is a TEST\nxahsdhwekjhasd23���$%$%/%&";
    font.draw(batch, text, 10.2f, 30.5f);
    font.draw(batch, text, 10.5f, 120.5f);
    font.draw(batch, text, 10.5f, 180.5f, 200, Align.center, false);
}
