public void setAtlas(TextureAtlas atlas) {
    atlasPanel.clearSelection();
    atlasPanel.setAtlas(atlas);
    CustomCardLayout cardLayout = (CustomCardLayout) content.getLayout();
    cardLayout.show(content, "atlas");
    showGenerationPanel(false);
    content.revalidate();
    content.repaint();
    revalidate();
    repaint();
}
