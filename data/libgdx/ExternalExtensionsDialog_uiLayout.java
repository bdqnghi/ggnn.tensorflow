private void uiLayout() {
    topPanel = new JPanel(new GridBagLayout());
    topPanel.setBorder(BorderFactory.createEmptyBorder(5, 5, 5, 5));
    warningNotice = new JLabel("List of third party extensions for LibGDX");
    warningNotice2 = new JLabel("These are not maintained by the LibGDX team, please see the support links for info and help");
    warningNotice.setHorizontalAlignment(JLabel.CENTER);
    warningNotice2.setHorizontalAlignment(JLabel.CENTER);
    topPanel.add(warningNotice, new GridBagConstraints(0, 0, 1, 1, 1, 0, NORTH, HORIZONTAL, new Insets(0, 0, 0, 0), 0, 0));
    topPanel.add(warningNotice2, new GridBagConstraints(0, 1, 1, 1, 1, 0, NORTH, HORIZONTAL, new Insets(0, 0, 0, 0), 0, 0));
    JSeparator separator = new JSeparator();
    separator.setForeground(new Color(85, 85, 85));
    separator.setBackground(new Color(85, 85, 85));
    topPanel.add(separator, new GridBagConstraints(0, 2, 1, 1, 1, 1, NORTH, HORIZONTAL, new Insets(0, 0, 0, 0), 0, 0));
    tableModel = new ExtensionTableModel();
    table = new JTable(tableModel) {

        @Override
        public String getToolTipText(MouseEvent e) {
            return ((ExtensionTableModel) getModel()).getToolTip(e);
        }
    };
    table.getColumnModel().getColumn(0).setPreferredWidth(10);
    table.getColumnModel().getColumn(1).setPreferredWidth(50);
    table.getColumnModel().getColumn(2).setPreferredWidth(100);
    table.getColumnModel().getColumn(3).setPreferredWidth(20);
    table.getColumnModel().getColumn(4).setPreferredWidth(30);
    table.setAutoResizeMode(JTable.AUTO_RESIZE_LAST_COLUMN);
    table.getTableHeader().setReorderingAllowed(false);
    table.getModel().addTableModelListener(this);
    table.addMouseListener(new MouseAdapter() {

        public void mouseClicked(MouseEvent e) {
            int row = table.getSelectedRow();
            int column = table.getSelectedColumn();
            if (column == 5) {
                URI uri = ((ExtensionTableModel) table.getModel()).getURI(row, column);
                if (uri != null) {
                    try {
                        Desktop.getDesktop().browse(uri);
                    } catch (IOException e1) {
                        e1.printStackTrace();
                    }
                }
            }
        }
    });
    scrollPane = new JScrollPane(table);
    bottomPanel = new JPanel(new GridBagLayout());
    buttonPanel = new JPanel(new GridBagLayout());
    buttonPanel.setBorder(BorderFactory.createEmptyBorder(5, 5, 5, 5));
    buttonOK = new SetupButton("Save");
    buttonCancel = new SetupButton("Cancel");
    buttonPanel.add(buttonOK, new GridBagConstraints(0, 0, 1, 1, 0, 0, CENTER, HORIZONTAL, new Insets(0, 0, 0, 0), 0, 0));
    buttonPanel.add(buttonCancel, new GridBagConstraints(1, 0, 1, 1, 0, 0, CENTER, HORIZONTAL, new Insets(0, 0, 0, 0), 0, 0));
    bottomPanel.add(buttonPanel, new GridBagConstraints(3, 0, 1, 1, 1, 1, SOUTHEAST, NONE, new Insets(0, 0, 0, 0), 0, 0));
    contentPane.add(topPanel, new GridBagConstraints(0, 0, 1, 1, 1, 0.1, NORTH, BOTH, new Insets(0, 0, 0, 0), 0, 0));
    contentPane.add(scrollPane, new GridBagConstraints(0, 1, 1, 1, 1, 1, NORTH, BOTH, new Insets(0, 0, 0, 0), 0, 0));
    contentPane.add(bottomPanel, new GridBagConstraints(0, 2, 1, 1, 1, 0, SOUTH, HORIZONTAL, new Insets(0, 0, 0, 0), 0, 0));
    try {
        initData();
    } catch (Exception e) {
        e.printStackTrace();
    }
}
