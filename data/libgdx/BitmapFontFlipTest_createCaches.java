private void createCaches(String type, BitmapFontCache cache1, BitmapFontCache cache2, BitmapFontCache cache3, BitmapFontCache cache4, BitmapFontCache cache5) {
    cache1.setText("(" + type + ")", 10, 320 - 66);
    String text = "Sphinx of black quartz,\njudge my vow.";
    cache2.setColor(Color.RED);
    cache2.setText(text, 5, 320 - 300);
    text = "How quickly\ndaft jumping zebras vex.";
    cache3.setColor(Color.BLUE);
    cache3.setText(text, 5, 320 - 200, 470, Align.center, false);
    text = "Kerning: LYA moo";
    cache4.setText(text, 210, 320 - 66, 0, text.length() - 3, 0, Align.left, false);
    text = "Forsaking monastic tradition, twelve jovial friars gave\nup their vocation for a questionable existence on the flying trapeze.";
    cache5.setColor(red);
    cache5.setText(text, 0, 320 - 300, 480, Align.center, false);
}
