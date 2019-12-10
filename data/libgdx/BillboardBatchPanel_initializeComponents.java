private void initializeComponents(BillboardParticleBatch renderer) {
    // Align
    alignCombo = new JComboBox();
    alignCombo.setModel(new DefaultComboBoxModel(AlignModeWrapper.values()));
    alignCombo.setSelectedItem(getAlignModeWrapper(renderer.getAlignMode()));
    alignCombo.addActionListener(new ActionListener() {

        public void actionPerformed(ActionEvent event) {
            AlignModeWrapper align = (AlignModeWrapper) alignCombo.getSelectedItem();
            editor.getBillboardBatch().setAlignMode(align.mode);
        }
    });
    // Cpu/Gpu
    useGPUBox = new JCheckBox();
    useGPUBox.setSelected(renderer.isUseGPU());
    useGPUBox.addChangeListener(new ChangeListener() {

        public void stateChanged(ChangeEvent event) {
            editor.getBillboardBatch().setUseGpu(useGPUBox.isSelected());
        }
    });
    // Sort
    sortCombo = new JComboBox();
    sortCombo.setModel(new DefaultComboBoxModel(SortMode.values()));
    sortCombo.setSelectedItem(getSortMode(renderer.getSorter()));
    sortCombo.addActionListener(new ActionListener() {

        public void actionPerformed(ActionEvent event) {
            SortMode mode = (SortMode) sortCombo.getSelectedItem();
            editor.getBillboardBatch().setSorter(mode.sorter);
        }
    });
    int i = 0;
    contentPanel.add(new JLabel("Align"), new GridBagConstraints(0, i, 1, 1, 0, 0, GridBagConstraints.WEST, GridBagConstraints.NONE, new Insets(6, 0, 0, 0), 0, 0));
    contentPanel.add(alignCombo, new GridBagConstraints(1, i++, 1, 1, 1, 0, GridBagConstraints.WEST, GridBagConstraints.NONE, new Insets(6, 0, 0, 0), 0, 0));
    contentPanel.add(new JLabel("Use GPU"), new GridBagConstraints(0, i, 1, 1, 0, 0, GridBagConstraints.WEST, GridBagConstraints.NONE, new Insets(6, 0, 0, 0), 0, 0));
    contentPanel.add(useGPUBox, new GridBagConstraints(1, i++, 1, 1, 1, 0, GridBagConstraints.WEST, GridBagConstraints.NONE, new Insets(6, 0, 0, 0), 0, 0));
    contentPanel.add(new JLabel("Sort"), new GridBagConstraints(0, i, 1, 1, 0, 0, GridBagConstraints.WEST, GridBagConstraints.NONE, new Insets(6, 0, 0, 0), 0, 0));
    contentPanel.add(sortCombo, new GridBagConstraints(1, i, 1, 1, 0, 0, GridBagConstraints.WEST, GridBagConstraints.NONE, new Insets(6, 0, 0, 0), 0, 0));
}
