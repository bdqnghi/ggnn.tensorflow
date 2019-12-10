public void setEmbedded() {
    GridBagLayout layout = (GridBagLayout) getLayout();
    GridBagConstraints constraints = layout.getConstraints(contentPanel);
    constraints.insets = new Insets(0, 0, 0, 0);
    layout.setConstraints(contentPanel, constraints);
    titlePanel.setVisible(false);
}
