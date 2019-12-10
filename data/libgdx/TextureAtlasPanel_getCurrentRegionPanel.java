public TexturePanel getCurrentRegionPanel() {
    CustomCardLayout layout = (CustomCardLayout) regionsPanel.getLayout();
    return layout.getCurrentCard(regionsPanel);
}
