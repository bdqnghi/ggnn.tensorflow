void save(File file) throws IOException {
    HieroSettings settings = new HieroSettings();
    settings.setFontName((String) fontList.getSelectedValue());
    settings.setFontSize(((Integer) fontSizeSpinner.getValue()).intValue());
    settings.setFont2File(fontFileText.getText());
    settings.setFont2Active(fontFileRadio.isSelected());
    settings.setBold(boldCheckBox.isSelected());
    settings.setItalic(italicCheckBox.isSelected());
    settings.setMono(monoCheckBox.isSelected());
    settings.setGamma(((Double) gammaSpinner.getValue()).floatValue());
    settings.setPaddingTop(((Integer) padTopSpinner.getValue()).intValue());
    settings.setPaddingRight(((Integer) padRightSpinner.getValue()).intValue());
    settings.setPaddingBottom(((Integer) padBottomSpinner.getValue()).intValue());
    settings.setPaddingLeft(((Integer) padLeftSpinner.getValue()).intValue());
    settings.setPaddingAdvanceX(((Integer) padAdvanceXSpinner.getValue()).intValue());
    settings.setPaddingAdvanceY(((Integer) padAdvanceYSpinner.getValue()).intValue());
    settings.setGlyphPageWidth(((Integer) glyphPageWidthCombo.getSelectedItem()).intValue());
    settings.setGlyphPageHeight(((Integer) glyphPageHeightCombo.getSelectedItem()).intValue());
    settings.setGlyphText(sampleTextPane.getText());
    for (Iterator iter = effectPanels.iterator(); iter.hasNext(); ) {
        EffectPanel panel = (EffectPanel) iter.next();
        settings.getEffects().add(panel.getEffect());
    }
    settings.save(file);
}
