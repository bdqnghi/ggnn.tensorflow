public Array<TextureRegion> getSelectedRegions() {
    CustomCardLayout layout = (CustomCardLayout) regionsPanel.getLayout();
    TexturePanel panel = getCurrentRegionPanel();
    return panel.selectedRegions;
}
