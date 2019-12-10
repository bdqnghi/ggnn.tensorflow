private void initializeComponents() {
    setLayout(new GridBagLayout());
    {
        titlePanel = new JPanel(new GridBagLayout());
        add(titlePanel, new GridBagConstraints(1, 0, 1, 1, 1.0, 0.0, GridBagConstraints.WEST, GridBagConstraints.HORIZONTAL, new Insets(3, 0, 3, 0), 0, 0));
        titlePanel.setCursor(Cursor.getPredefinedCursor(Cursor.HAND_CURSOR));
        {
            JLabel label = new JLabel(name);
            titlePanel.add(label, new GridBagConstraints(0, 0, 1, 1, 0.0, 0.0, GridBagConstraints.WEST, GridBagConstraints.NONE, new Insets(3, 6, 3, 6), 0, 0));
            label.setFont(label.getFont().deriveFont(Font.BOLD));
        }
        {
            descriptionLabel = new JLabel(description);
            titlePanel.add(descriptionLabel, new GridBagConstraints(1, 0, 1, 1, 1.0, 0.0, GridBagConstraints.WEST, GridBagConstraints.NONE, new Insets(3, 6, 3, 6), 0, 0));
        }
        {
            advancedButton = new JToggleButton("Advanced");
            titlePanel.add(advancedButton, new GridBagConstraints(2, 0, 1, 1, 0.0, 0.0, GridBagConstraints.CENTER, GridBagConstraints.NONE, new Insets(0, 0, 0, 6), 0, 0));
            advancedButton.setVisible(false);
        }
        {
            activeButton = new JToggleButton("Active");
            titlePanel.add(activeButton, new GridBagConstraints(3, 0, 1, 1, 0.0, 0.0, GridBagConstraints.CENTER, GridBagConstraints.NONE, new Insets(0, 0, 0, 6), 0, 0));
        }
    }
    {
        contentPanel = new JPanel(new GridBagLayout());
        add(contentPanel, new GridBagConstraints(1, 1, 1, 1, 0.0, 0.0, GridBagConstraints.CENTER, GridBagConstraints.BOTH, new Insets(0, 6, 6, 6), 0, 0));
        contentPanel.setVisible(false);
    }
    {
        advancedPanel = new JPanel(new GridBagLayout());
        add(advancedPanel, new GridBagConstraints(1, 2, 1, 1, 0.0, 0.0, GridBagConstraints.CENTER, GridBagConstraints.BOTH, new Insets(0, 6, 6, 6), 0, 0));
        advancedPanel.setVisible(false);
    }
}
