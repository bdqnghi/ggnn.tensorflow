protected void initializeComponents() {
    super.initializeComponents();
    JPanel velocitiesPanel = new JPanel();
    velocitiesPanel.setLayout(new GridBagLayout());
    {
        JPanel sideButtons = new JPanel(new GridBagLayout());
        velocitiesPanel.add(sideButtons, new GridBagConstraints(1, 0, 1, 1, 1, 1, GridBagConstraints.NORTHWEST, GridBagConstraints.NONE, new Insets(0, 0, 0, 0), 0, 0));
        {
            sideButtons.add(velocityBox = new JComboBox(new DefaultComboBoxModel()), new GridBagConstraints(0, -1, 1, 1, 0, 0, GridBagConstraints.CENTER, GridBagConstraints.HORIZONTAL, new Insets(0, 0, 6, 0), 0, 0));
        }
        {
            JButton newButton = new JButton("New");
            sideButtons.add(newButton, new GridBagConstraints(0, -1, 1, 1, 0, 0, GridBagConstraints.CENTER, GridBagConstraints.HORIZONTAL, new Insets(0, 0, 6, 0), 0, 0));
            newButton.addActionListener(new ActionListener() {

                public void actionPerformed(ActionEvent event) {
                    createVelocity(velocityBox.getSelectedItem());
                }
            });
        }
        {
            JButton deleteButton = new JButton("Delete");
            sideButtons.add(deleteButton, new GridBagConstraints(0, -1, 1, 1, 0, 0, GridBagConstraints.CENTER, GridBagConstraints.HORIZONTAL, new Insets(0, 0, 6, 0), 0, 0));
            deleteButton.addActionListener(new ActionListener() {

                public void actionPerformed(ActionEvent event) {
                    deleteVelocity();
                }
            });
        }
    }
    JScrollPane scroll = new JScrollPane();
    velocitiesPanel.add(scroll, new GridBagConstraints(0, 0, 1, 1, 0, 0, GridBagConstraints.WEST, GridBagConstraints.NONE, new Insets(0, 0, 0, 6), 0, 0));
    velocityTable = new JTable() {

        public Class getColumnClass(int column) {
            return column == 1 ? Boolean.class : super.getColumnClass(column);
        }

        @Override
        public Dimension getPreferredScrollableViewportSize() {
            Dimension dim = super.getPreferredScrollableViewportSize();
            dim.height = getPreferredSize().height;
            return dim;
        }
    };
    velocityTable.getTableHeader().setReorderingAllowed(false);
    velocityTable.setSelectionMode(ListSelectionModel.SINGLE_SELECTION);
    scroll.setViewportView(velocityTable);
    velocityTableModel = new DefaultTableModel(new String[0][0], new String[] { "Velocity", "Active" });
    velocityTable.setModel(velocityTableModel);
    velocityTable.getSelectionModel().addListSelectionListener(new ListSelectionListener() {

        public void valueChanged(ListSelectionEvent event) {
            if (event.getValueIsAdjusting())
                return;
            velocitySelected();
        }
    });
    velocityTableModel.addTableModelListener(new TableModelListener() {

        public void tableChanged(TableModelEvent event) {
            if (event.getColumn() != 1)
                return;
            velocityChecked(event.getFirstRow(), (Boolean) velocityTable.getValueAt(event.getFirstRow(), 1));
        }
    });
    // Velocity values
    emptyPanel = new ParticleValuePanel(editor, "", "", true, false);
    strengthVelocityPanel = new StrengthVelocityPanel(editor, null, "Life", "", "");
    angularVelocityPanel = new AngularVelocityPanel(editor, null, "Life", "", "");
    strengthVelocityPanel.setVisible(false);
    angularVelocityPanel.setVisible(false);
    emptyPanel.setVisible(false);
    strengthVelocityPanel.setIsAlwayShown(true);
    angularVelocityPanel.setIsAlwayShown(true);
    emptyPanel.setIsAlwayShown(true);
    emptyPanel.setValue(null);
    // Assemble
    int i = 0;
    addContent(i++, 0, velocitiesPanel);
    addContent(i++, 0, strengthVelocityPanel);
    addContent(i++, 0, angularVelocityPanel);
    addContent(i++, 0, emptyPanel);
}
