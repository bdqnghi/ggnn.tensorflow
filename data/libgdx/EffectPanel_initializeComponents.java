private void initializeComponents() {
    setLayout(new GridBagLayout());
    {
        JScrollPane scroll = new JScrollPane();
        add(scroll, new GridBagConstraints(0, 0, 1, 1, 1, 0, GridBagConstraints.CENTER, GridBagConstraints.BOTH, new Insets(0, 0, 0, 6), 0, 0));
        {
            emitterTable = new JTable() {

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
            emitterTable.getTableHeader().setReorderingAllowed(false);
            emitterTable.setSelectionMode(ListSelectionModel.SINGLE_SELECTION);
            scroll.setViewportView(emitterTable);
            emitterTableModel = new DefaultTableModel(new String[0][0], new String[] { "Emitter", "" });
            emitterTable.setModel(emitterTableModel);
            emitterTable.getSelectionModel().addListSelectionListener(new ListSelectionListener() {

                public void valueChanged(ListSelectionEvent event) {
                    if (event.getValueIsAdjusting())
                        return;
                    emitterSelected();
                }
            });
            emitterTableModel.addTableModelListener(new TableModelListener() {

                public void tableChanged(TableModelEvent event) {
                    if (event.getColumn() != 1)
                        return;
                    emitterChecked(event.getFirstRow(), (Boolean) emitterTable.getValueAt(event.getFirstRow(), 1));
                }
            });
        }
    }
    {
        JPanel sideButtons = new JPanel(new GridBagLayout());
        add(sideButtons, new GridBagConstraints(1, 0, 1, 1, 0, 0, GridBagConstraints.NORTHWEST, GridBagConstraints.BOTH, new Insets(0, 0, 0, 0), 0, 0));
        {
            controllerTypeCombo = new JComboBox();
            controllerTypeCombo.setModel(new DefaultComboBoxModel(ControllerType.values()));
            sideButtons.add(controllerTypeCombo, new GridBagConstraints(0, -1, 1, 1, 0, 0, GridBagConstraints.CENTER, GridBagConstraints.HORIZONTAL, new Insets(0, 0, 6, 0), 0, 0));
        }
        {
            JButton newButton = new JButton("New");
            sideButtons.add(newButton, new GridBagConstraints(0, -1, 1, 1, 0, 0, GridBagConstraints.CENTER, GridBagConstraints.HORIZONTAL, new Insets(0, 0, 6, 0), 0, 0));
            newButton.addActionListener(new ActionListener() {

                public void actionPerformed(ActionEvent event) {
                    ControllerType item = (ControllerType) controllerTypeCombo.getSelectedItem();
                    createDefaultEmitter(item, true, true);
                }
            });
        }
        {
            JButton deleteButton = new JButton("Delete");
            sideButtons.add(deleteButton, new GridBagConstraints(0, -1, 1, 1, 0, 0, GridBagConstraints.CENTER, GridBagConstraints.HORIZONTAL, new Insets(0, 0, 6, 0), 0, 0));
            deleteButton.addActionListener(new ActionListener() {

                public void actionPerformed(ActionEvent event) {
                    deleteEmitter();
                }
            });
        }
        {
            JButton cloneButton = new JButton("Clone");
            sideButtons.add(cloneButton, new GridBagConstraints(0, -1, 1, 1, 0, 0, GridBagConstraints.CENTER, GridBagConstraints.HORIZONTAL, new Insets(0, 0, 6, 0), 0, 0));
            cloneButton.addActionListener(new ActionListener() {

                public void actionPerformed(ActionEvent event) {
                    cloneEmitter();
                }
            });
        }
        {
            sideButtons.add(new JSeparator(JSeparator.HORIZONTAL), new GridBagConstraints(0, -1, 1, 1, 0, 0, GridBagConstraints.CENTER, GridBagConstraints.HORIZONTAL, new Insets(0, 0, 6, 0), 0, 0));
        }
        {
            JButton saveButton = new JButton("Save");
            sideButtons.add(saveButton, new GridBagConstraints(0, -1, 1, 1, 0, 0, GridBagConstraints.CENTER, GridBagConstraints.HORIZONTAL, new Insets(0, 0, 6, 0), 0, 0));
            saveButton.addActionListener(new ActionListener() {

                public void actionPerformed(ActionEvent event) {
                    saveEffect();
                }
            });
        }
        {
            JButton openButton = new JButton("Open");
            sideButtons.add(openButton, new GridBagConstraints(0, -1, 1, 1, 0, 0, GridBagConstraints.CENTER, GridBagConstraints.HORIZONTAL, new Insets(0, 0, 6, 0), 0, 0));
            openButton.addActionListener(new ActionListener() {

                public void actionPerformed(ActionEvent event) {
                    openEffect();
                }
            });
        }
        {
            JButton importButton = new JButton("Import");
            sideButtons.add(importButton, new GridBagConstraints(0, -1, 1, 1, 0, 0, GridBagConstraints.CENTER, GridBagConstraints.HORIZONTAL, new Insets(0, 0, 6, 0), 0, 0));
            importButton.addActionListener(new ActionListener() {

                public void actionPerformed(ActionEvent event) {
                    importEffect();
                }
            });
        }
    /*
			{
				JButton importButton = new JButton("Export");
				sideButtons.add(importButton, new GridBagConstraints(0, -1, 1, 1, 0, 0, GridBagConstraints.CENTER,
					GridBagConstraints.HORIZONTAL, new Insets(0, 0, 6, 0), 0, 0));
				importButton.addActionListener(new ActionListener() {
					public void actionPerformed (ActionEvent event) {
						exportEffect();
					}
				});
			}
			*/
    }
}
