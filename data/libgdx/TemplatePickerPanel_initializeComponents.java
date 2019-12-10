protected void initializeComponents(Class<T> type, LoaderButton<T> loaderButton) {
    int i = 0;
    if (loaderButton != null) {
        loaderButton.setListener(this);
        contentPanel.add(loaderButton, new GridBagConstraints(0, i++, 1, 1, 1, 0, GridBagConstraints.CENTER, GridBagConstraints.BOTH, new Insets(0, 0, 0, 6), 0, 0));
    }
    JScrollPane scroll = new JScrollPane();
    contentPanel.add(scroll, new GridBagConstraints(0, i, 1, 1, 1, 0, GridBagConstraints.CENTER, GridBagConstraints.BOTH, new Insets(0, 0, 0, 6), 0, 0));
    {
        templatesTable = new JTable() {

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
        templatesTable.getTableHeader().setReorderingAllowed(false);
        templatesTable.setSelectionMode(ListSelectionModel.SINGLE_SELECTION);
        scroll.setViewportView(templatesTable);
        templatesTableModel = new DefaultTableModel(new String[0][0], new String[] { "Template", "Selected" });
        templatesTable.setModel(templatesTableModel);
        reloadTemplates();
        templatesTableModel.addTableModelListener(new TableModelListener() {

            public void tableChanged(TableModelEvent event) {
                if (event.getColumn() != 1)
                    return;
                int row = event.getFirstRow();
                boolean checked = (Boolean) templatesTable.getValueAt(row, 1);
                if (isOneModelSelectedRequired && (value.size == 1 && !checked)) {
                    EditorPanel.setValue(templatesTableModel, true, row, 1);
                    return;
                }
                templateChecked(row, checked);
            }
        });
    }
}
