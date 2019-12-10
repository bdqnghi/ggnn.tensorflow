private void initializeComponents() {
    setLayout(new GridBagLayout());
    content = new JPanel();
    atlasPanel = new TextureAtlasPanel();
    texturePanel = new TexturePanel();
    CustomCardLayout cardLayout = new CustomCardLayout();
    content.setLayout(cardLayout);
    content.add(atlasPanel, "atlas");
    content.add(texturePanel, "texture");
    add(content, new GridBagConstraints(0, 0, 1, 1, 0, 0, GridBagConstraints.WEST, GridBagConstraints.NONE, new Insets(0, 0, 0, 0), 0, 0));
    JPanel controls = new JPanel(new GridBagLayout());
    controls.add(selectButton = new JButton("Select"), new GridBagConstraints(0, 0, 1, 1, 0, 0, GridBagConstraints.CENTER, GridBagConstraints.NONE, new Insets(0, 0, 0, 0), 0, 0));
    controls.add(new JSeparator(JSeparator.HORIZONTAL), new GridBagConstraints(0, -1, 1, 1, 0, 0, GridBagConstraints.CENTER, GridBagConstraints.HORIZONTAL, new Insets(0, 0, 6, 0), 0, 0));
    // Pick
    JPanel pickPanel = new JPanel(new GridBagLayout());
    pickPanel.add(selectAllButton = new JButton("Pick All"), new GridBagConstraints(0, 0, 1, 1, 0, 0, GridBagConstraints.CENTER, GridBagConstraints.NONE, new Insets(0, 0, 0, 0), 0, 0));
    pickPanel.add(clearButton = new JButton("Clear Selection"), new GridBagConstraints(1, 0, 1, 1, 0, 0, GridBagConstraints.CENTER, GridBagConstraints.NONE, new Insets(0, 0, 0, 0), 0, 0));
    pickPanel.add(reverseButton = new JButton("Reverse Selection"), new GridBagConstraints(0, 1, 1, 1, 0, 0, GridBagConstraints.CENTER, GridBagConstraints.NONE, new Insets(0, 0, 0, 0), 0, 0));
    controls.add(pickPanel, new GridBagConstraints(0, -1, 1, 1, 0, 0, GridBagConstraints.CENTER, GridBagConstraints.NONE, new Insets(0, 0, 0, 0), 0, 0));
    // Generation
    generationPanel = new JPanel(new GridBagLayout());
    generationPanel.add(new JLabel("Rows"), new GridBagConstraints(0, 0, 1, 1, 1, 0, GridBagConstraints.CENTER, GridBagConstraints.NONE, new Insets(0, 0, 0, 0), 0, 0));
    generationPanel.add(rowSlider = new Slider(1, 1, 9999, 1), new GridBagConstraints(1, 0, 1, 1, 1, 0, GridBagConstraints.CENTER, GridBagConstraints.NONE, new Insets(0, 0, 0, 0), 0, 0));
    generationPanel.add(new JLabel("Columns"), new GridBagConstraints(0, 1, 1, 1, 1, 0, GridBagConstraints.CENTER, GridBagConstraints.NONE, new Insets(0, 0, 0, 0), 0, 0));
    generationPanel.add(columnSlider = new Slider(1, 1, 9999, 1), new GridBagConstraints(1, 1, 1, 1, 1, 0, GridBagConstraints.CENTER, GridBagConstraints.NONE, new Insets(0, 0, 0, 0), 0, 0));
    generationPanel.add(generateBox = new JComboBox(new DefaultComboBoxModel(GenerationMode.values())), new GridBagConstraints(0, 2, 1, 1, 1, 0, GridBagConstraints.CENTER, GridBagConstraints.NONE, new Insets(0, 0, 0, 0), 0, 0));
    generationPanel.add(generateButton = new JButton("Generate"), new GridBagConstraints(1, 2, 1, 1, 1, 0, GridBagConstraints.CENTER, GridBagConstraints.NONE, new Insets(0, 0, 0, 0), 0, 0));
    controls.add(new JSeparator(JSeparator.HORIZONTAL), new GridBagConstraints(0, -1, 1, 1, 0, 0, GridBagConstraints.CENTER, GridBagConstraints.HORIZONTAL, new Insets(0, 0, 6, 0), 0, 0));
    controls.add(generationPanel, new GridBagConstraints(0, -1, 1, 1, 0, 0, GridBagConstraints.CENTER, GridBagConstraints.NONE, new Insets(0, 0, 0, 0), 0, 0));
    add(controls, new GridBagConstraints(1, 0, 1, 1, 1, 0, GridBagConstraints.NORTHWEST, GridBagConstraints.NONE, new Insets(0, 0, 0, 0), 0, 0));
    selectButton.addActionListener(new ActionListener() {

        @Override
        public void actionPerformed(ActionEvent arg0) {
            JPanel panel = ((CustomCardLayout) content.getLayout()).getCurrentCard(content);
            TexturePanel currentTexturePanel = panel == atlasPanel ? atlasPanel.getCurrentRegionPanel() : texturePanel;
            listener.onRegionsSelected(currentTexturePanel.selectedRegions);
        }
    });
    selectAllButton.addActionListener(new ActionListener() {

        @Override
        public void actionPerformed(ActionEvent arg0) {
            JPanel panel = ((CustomCardLayout) content.getLayout()).getCurrentCard(content);
            TexturePanel currentTexturePanel = panel == atlasPanel ? atlasPanel.getCurrentRegionPanel() : texturePanel;
            currentTexturePanel.selectAll();
        }
    });
    reverseButton.addActionListener(new ActionListener() {

        @Override
        public void actionPerformed(ActionEvent arg0) {
            JPanel panel = ((CustomCardLayout) content.getLayout()).getCurrentCard(content);
            TexturePanel currentTexturePanel = panel == atlasPanel ? atlasPanel.getCurrentRegionPanel() : texturePanel;
            currentTexturePanel.selectedRegions.reverse();
            currentTexturePanel.revalidate();
            currentTexturePanel.repaint();
        }
    });
    clearButton.addActionListener(new ActionListener() {

        @Override
        public void actionPerformed(ActionEvent arg0) {
            JPanel panel = ((CustomCardLayout) content.getLayout()).getCurrentCard(content);
            TexturePanel currentPanel = panel == atlasPanel ? atlasPanel.getCurrentRegionPanel() : texturePanel;
            currentPanel.clearSelection();
        }
    });
    generateButton.addActionListener(new ActionListener() {

        @Override
        public void actionPerformed(ActionEvent arg0) {
            generateRegions((GenerationMode) generateBox.getSelectedItem());
            texturePanel.revalidate();
            texturePanel.repaint();
        }
    });
}
