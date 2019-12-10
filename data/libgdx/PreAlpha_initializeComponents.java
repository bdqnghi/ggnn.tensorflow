private void initializeComponents() {
    // Create the menu bar.
    JMenuBar menuBar = new JMenuBar();
    // Build the first menu.
    JMenu menu = new JMenu("File");
    menuBar.add(menu);
    // a group of JMenuItems
    JMenuItem menuItem = new JMenuItem("Open");
    menuItem.addActionListener(new ActionListener() {

        @Override
        public void actionPerformed(ActionEvent arg0) {
            open();
        }
    });
    menu.add(menuItem);
    menuItem = new JMenuItem("Save");
    menuItem.addActionListener(new ActionListener() {

        @Override
        public void actionPerformed(ActionEvent arg0) {
            save();
        }
    });
    menu.add(menuItem);
    setJMenuBar(menuBar);
    imagePanel = new ImagePanel();
    getContentPane().add(imagePanel);
}
