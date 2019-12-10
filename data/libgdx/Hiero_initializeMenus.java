private void initializeMenus() {
    {
        JMenuBar menuBar = new JMenuBar();
        setJMenuBar(menuBar);
        {
            JMenu fileMenu = new JMenu();
            menuBar.add(fileMenu);
            fileMenu.setText("File");
            fileMenu.setMnemonic(KeyEvent.VK_F);
            {
                openMenuItem = new JMenuItem("Open Hiero settings file...");
                openMenuItem.setMnemonic(KeyEvent.VK_O);
                openMenuItem.setAccelerator(KeyStroke.getKeyStroke(KeyEvent.VK_O, KeyEvent.CTRL_MASK));
                fileMenu.add(openMenuItem);
            }
            {
                saveMenuItem = new JMenuItem("Save Hiero settings file...");
                saveMenuItem.setMnemonic(KeyEvent.VK_S);
                saveMenuItem.setAccelerator(KeyStroke.getKeyStroke(KeyEvent.VK_S, KeyEvent.CTRL_MASK));
                fileMenu.add(saveMenuItem);
            }
            fileMenu.addSeparator();
            {
                saveBMFontMenuItem = new JMenuItem("Save BMFont files (text)...");
                saveBMFontMenuItem.setMnemonic(KeyEvent.VK_B);
                saveBMFontMenuItem.setAccelerator(KeyStroke.getKeyStroke(KeyEvent.VK_B, KeyEvent.CTRL_MASK));
                fileMenu.add(saveBMFontMenuItem);
            }
            fileMenu.addSeparator();
            {
                exitMenuItem = new JMenuItem("Exit");
                exitMenuItem.setMnemonic(KeyEvent.VK_X);
                fileMenu.add(exitMenuItem);
            }
        }
    }
}
