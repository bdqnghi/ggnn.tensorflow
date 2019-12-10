private void renderNormal(String type) {
    String text = "Forsaking monastic tradition, twelve jovial friars gave\nup their vocation for a questionable existence on the flying trapeze.";
    font.setColor(red);
    font.draw(spriteBatch, text, 0, 320 - 300, 480, Align.center, false);
    font.setColor(Color.WHITE);
    font.draw(spriteBatch, "(" + type + ")", 10, 320 - 66);
    if (red.a > 0.6f)
        return;
    text = "Sphinx of black quartz,\njudge my vow.";
    font.setColor(Color.RED);
    font.draw(spriteBatch, text, 5, 320 - 300);
    text = "How quickly\ndaft jumping zebras vex.";
    font.setColor(Color.BLUE);
    font.draw(spriteBatch, text, 5, 320 - 200, 470, Align.right, false);
    text = "Kerning: LYA moo";
    font.setColor(Color.WHITE);
    font.draw(spriteBatch, text, 210, 320 - 66, 0, text.length() - 3, 0, Align.left, false);
}
