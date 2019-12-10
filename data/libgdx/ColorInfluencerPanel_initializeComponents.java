private void initializeComponents(ColorInfluencer.Single emitter) {
    int i = 0;
    addContent(i++, 0, tintPanel = new GradientPanel(editor, emitter.colorValue, "Tint", "", false));
    addContent(i++, 0, alphaPanel = new PercentagePanel(editor, emitter.alphaValue, "Life", "Transparency", ""));
    tintPanel.showContent(true);
    alphaPanel.showContent(true);
}
