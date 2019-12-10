private void initializeComponents() {
    // {
    // JMenuBar menuBar = new JMenuBar();
    // setJMenuBar(menuBar);
    // JPopupMenu.setDefaultLightWeightPopupEnabled(false);
    // JMenu fileMenu = new JMenu("File");
    // menuBar.add(fileMenu);
    // }
    splitPane = new JSplitPane();
    splitPane.setUI(new BasicSplitPaneUI() {

        public void paint(Graphics g, JComponent jc) {
        }
    });
    splitPane.setDividerSize(4);
    getContentPane().add(splitPane, BorderLayout.CENTER);
    {
        JSplitPane rightSplit = new JSplitPane(JSplitPane.VERTICAL_SPLIT);
        rightSplit.setUI(new BasicSplitPaneUI() {

            public void paint(Graphics g, JComponent jc) {
            }
        });
        rightSplit.setDividerSize(4);
        splitPane.add(rightSplit, JSplitPane.RIGHT);
        {
            JPanel propertiesPanel = new JPanel(new GridBagLayout());
            rightSplit.add(propertiesPanel, JSplitPane.TOP);
            propertiesPanel.setBorder(new CompoundBorder(BorderFactory.createEmptyBorder(3, 0, 6, 6), BorderFactory.createTitledBorder("Editor Properties")));
            {
                JScrollPane scroll = new JScrollPane();
                propertiesPanel.add(scroll, new GridBagConstraints(0, 0, 1, 1, 1, 1, GridBagConstraints.NORTH, GridBagConstraints.BOTH, new Insets(0, 0, 0, 0), 0, 0));
                scroll.setBorder(BorderFactory.createEmptyBorder(0, 0, 0, 0));
                {
                    editRowsPanel = new JPanel(new GridBagLayout());
                    scroll.setViewportView(editRowsPanel);
                    scroll.getVerticalScrollBar().setUnitIncrement(70);
                }
            }
        }
        {
            JPanel propertiesPanel = new JPanel(new GridBagLayout());
            rightSplit.add(propertiesPanel, JSplitPane.BOTTOM);
            propertiesPanel.setBorder(new CompoundBorder(BorderFactory.createEmptyBorder(3, 0, 6, 6), BorderFactory.createTitledBorder("Emitter Properties")));
            {
                JScrollPane scroll = new JScrollPane();
                propertiesPanel.add(scroll, new GridBagConstraints(0, 0, 1, 1, 1, 1, GridBagConstraints.NORTH, GridBagConstraints.BOTH, new Insets(0, 0, 0, 0), 0, 0));
                scroll.setBorder(BorderFactory.createEmptyBorder(0, 0, 0, 0));
                {
                    rowsPanel = new JPanel(new GridBagLayout());
                    scroll.setViewportView(rowsPanel);
                    scroll.getVerticalScrollBar().setUnitIncrement(70);
                }
            }
        }
        rightSplit.setDividerLocation(200);
    }
    {
        JSplitPane leftSplit = new JSplitPane(JSplitPane.VERTICAL_SPLIT);
        leftSplit.setUI(new BasicSplitPaneUI() {

            public void paint(Graphics g, JComponent jc) {
            }
        });
        leftSplit.setDividerSize(4);
        splitPane.add(leftSplit, JSplitPane.LEFT);
        {
            JPanel spacer = new JPanel(new BorderLayout());
            leftSplit.add(spacer, JSplitPane.TOP);
            spacer.add(lwjglCanvas.getCanvas());
            spacer.setBorder(BorderFactory.createEmptyBorder(0, 0, 0, 4));
        }
        {
            JPanel emittersPanel = new JPanel(new BorderLayout());
            leftSplit.add(emittersPanel, JSplitPane.BOTTOM);
            emittersPanel.setBorder(new CompoundBorder(BorderFactory.createEmptyBorder(0, 6, 6, 0), BorderFactory.createTitledBorder("Effect Emitters")));
            {
                effectPanel = new EffectPanel(this);
                emittersPanel.add(effectPanel);
            }
        }
        leftSplit.setDividerLocation(575);
    }
    splitPane.setDividerLocation(325);
}
