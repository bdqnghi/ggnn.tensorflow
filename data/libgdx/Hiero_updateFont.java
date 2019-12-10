void updateFont() {
    int fontSize = ((Integer) fontSizeSpinner.getValue()).intValue();
    File file = null;
    if (fontFileRadio.isSelected()) {
        file = new File(fontFileText.getText());
        if (!file.exists() || !file.isFile())
            file = null;
    }
    boolean isFreeType = freeTypeRadio.isSelected();
    boolean isNative = nativeRadio.isSelected();
    boolean isJava = javaRadio.isSelected();
    addEffectButton.setVisible(isJava);
    effectsScroll.setVisible(isJava);
    appliedEffectsScroll.setVisible(isJava);
    boldCheckBox.setEnabled(!isFreeType);
    italicCheckBox.setEnabled(!isFreeType);
    bitmapPanel.setVisible(isFreeType);
    unicodePanel.setVisible(!isFreeType);
    updateFontSelector();
    UnicodeFont unicodeFont = null;
    if (file != null) {
        // Load from file.
        try {
            unicodeFont = new UnicodeFont(fontFileText.getText(), fontSize, boldCheckBox.isSelected(), italicCheckBox.isSelected());
        } catch (Throwable ex) {
            ex.printStackTrace();
            fontFileRadio.setSelected(false);
        }
    }
    if (unicodeFont == null) {
        // Load from java.awt.Font (kerning not available!).
        unicodeFont = new UnicodeFont(Font.decode((String) fontList.getSelectedValue()), fontSize, boldCheckBox.isSelected(), italicCheckBox.isSelected());
    }
    unicodeFont.setMono(monoCheckBox.isSelected());
    unicodeFont.setGamma(((Double) gammaSpinner.getValue()).floatValue());
    unicodeFont.setPaddingTop(((Integer) padTopSpinner.getValue()).intValue());
    unicodeFont.setPaddingRight(((Integer) padRightSpinner.getValue()).intValue());
    unicodeFont.setPaddingBottom(((Integer) padBottomSpinner.getValue()).intValue());
    unicodeFont.setPaddingLeft(((Integer) padLeftSpinner.getValue()).intValue());
    unicodeFont.setPaddingAdvanceX(((Integer) padAdvanceXSpinner.getValue()).intValue());
    unicodeFont.setPaddingAdvanceY(((Integer) padAdvanceYSpinner.getValue()).intValue());
    unicodeFont.setGlyphPageWidth(((Integer) glyphPageWidthCombo.getSelectedItem()).intValue());
    unicodeFont.setGlyphPageHeight(((Integer) glyphPageHeightCombo.getSelectedItem()).intValue());
    if (nativeRadio.isSelected())
        unicodeFont.setRenderType(RenderType.Native);
    else if (freeTypeRadio.isSelected())
        unicodeFont.setRenderType(RenderType.FreeType);
    else
        unicodeFont.setRenderType(RenderType.Java);
    for (Iterator iter = effectPanels.iterator(); iter.hasNext(); ) {
        EffectPanel panel = (EffectPanel) iter.next();
        unicodeFont.getEffects().add(panel.getEffect());
    }
    int size = sampleTextPane.getFont().getSize();
    if (size < 14)
        size = 14;
    sampleTextPane.setFont(unicodeFont.getFont().deriveFont((float) size));
    if (this.unicodeFont != null)
        this.unicodeFont.dispose();
    this.unicodeFont = unicodeFont;
    updateFontSelector();
}
