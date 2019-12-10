private void titleEvents(JButton minimize, JButton exit) {
    minimize.addActionListener(new ActionListener() {

        @Override
        public void actionPerformed(ActionEvent e) {
            setState(ICONIFIED);
        }
    });
    exit.addActionListener(new ActionListener() {

        @Override
        public void actionPerformed(ActionEvent e) {
            dispose();
            System.exit(0);
        }
    });
}
