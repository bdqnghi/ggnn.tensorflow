public void setTexture(Texture texture) {
    texturePanel.clearSelection();
    texturePanel.setTexture(texture);
    CustomCardLayout cardLayout = (CustomCardLayout) content.getLayout();
    cardLayout.show(content, "texture");
    showGenerationPanel(true);
    content.revalidate();
    content.repaint();
    revalidate();
    repaint();
}
