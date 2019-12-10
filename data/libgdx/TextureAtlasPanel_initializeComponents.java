private void initializeComponents() {
    setLayout(new GridBagLayout());
    JButton backwardButton, forwardButton;
    add(backwardButton = new JButton("<"), new GridBagConstraints(0, 0, 1, 1, 1, 1, GridBagConstraints.CENTER, GridBagConstraints.HORIZONTAL, new Insets(0, 0, 0, 0), 0, 0));
    add(regionsPanel = new JPanel(), new GridBagConstraints(1, 0, 1, 1, 1, 1, GridBagConstraints.CENTER, GridBagConstraints.HORIZONTAL, new Insets(0, 0, 0, 0), 0, 0));
    add(forwardButton = new JButton(">"), new GridBagConstraints(2, 0, 1, 1, 1, 1, GridBagConstraints.CENTER, GridBagConstraints.HORIZONTAL, new Insets(0, 0, 0, 0), 0, 0));
    regionsPanel.setLayout(new CustomCardLayout());
    backwardButton.addActionListener(new ActionListener() {

        @Override
        public void actionPerformed(ActionEvent arg0) {
            if (atlas == null)
                return;
            CustomCardLayout layout = (CustomCardLayout) regionsPanel.getLayout();
            layout.previous(regionsPanel);
        }
    });
    forwardButton.addActionListener(new ActionListener() {

        @Override
        public void actionPerformed(ActionEvent arg0) {
            if (atlas == null)
                return;
            CustomCardLayout layout = (CustomCardLayout) regionsPanel.getLayout();
            layout.next(regionsPanel);
        }
    });
}
