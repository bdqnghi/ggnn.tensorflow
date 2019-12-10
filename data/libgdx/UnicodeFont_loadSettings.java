private void loadSettings(HieroSettings settings) {
    paddingTop = settings.getPaddingTop();
    paddingLeft = settings.getPaddingLeft();
    paddingBottom = settings.getPaddingBottom();
    paddingRight = settings.getPaddingRight();
    paddingAdvanceX = settings.getPaddingAdvanceX();
    paddingAdvanceY = settings.getPaddingAdvanceY();
    glyphPageWidth = settings.getGlyphPageWidth();
    glyphPageHeight = settings.getGlyphPageHeight();
    effects.addAll(settings.getEffects());
}
