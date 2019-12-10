void open(File file) {
    EffectPanel[] panels = (EffectPanel[]) effectPanels.toArray(new EffectPanel[effectPanels.size()]);
    for (int i = 0; i < panels.length; i++) panels[i].remove();
    HieroSettings settings = new HieroSettings(file.getAbsolutePath());
    fontList.setSelectedValue(settings.getFontName(), true);
    fontSizeSpinner.setValue(new Integer(settings.getFontSize()));
    boldCheckBox.setSelected(settings.isBold());
    italicCheckBox.setSelected(settings.isItalic());
    monoCheckBox.setSelected(settings.isMono());
    gammaSpinner.setValue(new Float(settings.getGamma()));
    padTopSpinner.setValue(new Integer(settings.getPaddingTop()));
    padRightSpinner.setValue(new Integer(settings.getPaddingRight()));
    padBottomSpinner.setValue(new Integer(settings.getPaddingBottom()));
    padLeftSpinner.setValue(new Integer(settings.getPaddingLeft()));
    padAdvanceXSpinner.setValue(new Integer(settings.getPaddingAdvanceX()));
    padAdvanceYSpinner.setValue(new Integer(settings.getPaddingAdvanceY()));
    glyphPageWidthCombo.setSelectedItem(new Integer(settings.getGlyphPageWidth()));
    glyphPageHeightCombo.setSelectedItem(new Integer(settings.getGlyphPageHeight()));
    String gt = settings.getGlyphText();
    if (gt.length() > 0) {
        sampleTextPane.setText(settings.getGlyphText());
    }
    final String font2 = settings.getFont2File();
    if (font2.length() > 0)
        fontFileText.setText(font2);
    else
        fontFileText.setText(prefs.get("font.file", ""));
    fontFileRadio.setSelected(settings.isFont2Active());
    systemFontRadio.setSelected(!settings.isFont2Active());
    for (Iterator iter = settings.getEffects().iterator(); iter.hasNext(); ) {
        ConfigurableEffect settingsEffect = (ConfigurableEffect) iter.next();
        for (int i = 0, n = effectsListModel.getSize(); i < n; i++) {
            ConfigurableEffect effect = (ConfigurableEffect) effectsListModel.getElementAt(i);
            if (effect.getClass() == settingsEffect.getClass()) {
                effect.setValues(settingsEffect.getValues());
                new EffectPanel(effect);
                break;
            }
        }
    }
    updateFont();
}
