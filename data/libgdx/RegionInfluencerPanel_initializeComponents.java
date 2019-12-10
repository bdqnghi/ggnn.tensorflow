@Override
protected void initializeComponents() {
    super.initializeComponents();
    JButton pickButton;
    regionSelectDialog = new JDialog(editor, "Pick regions", true);
    regionPickerPanel = new RegionPickerPanel(this);
    JScrollPane scrollPane = new JScrollPane();
    scrollPane.setViewportView(regionPickerPanel);
    regionSelectDialog.setContentPane(scrollPane);
    regionSelectDialog.setDefaultCloseOperation(JDialog.HIDE_ON_CLOSE);
    addContent(0, 0, pickButton = new JButton("Pick Regions"), false, GridBagConstraints.WEST, GridBagConstraints.NONE);
    pickButton.addActionListener(new ActionListener() {

        @Override
        public void actionPerformed(ActionEvent arg0) {
            if (editor.isUsingDefaultTexture()) {
                JOptionPane.showMessageDialog(editor, "Load a Texture or an Atlas first.");
                return;
            }
            TextureAtlas atlas = editor.getAtlas();
            if (atlas != null)
                regionPickerPanel.setAtlas(atlas);
            else
                regionPickerPanel.setTexture(editor.getTexture());
            regionPickerPanel.revalidate();
            regionPickerPanel.repaint();
            regionSelectDialog.validate();
            regionSelectDialog.repaint();
            regionSelectDialog.pack();
            regionSelectDialog.setVisible(true);
        }
    });
}
