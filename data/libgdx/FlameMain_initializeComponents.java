private void initializeComponents() {
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
                    editorPropertiesPanel = new JPanel(new GridBagLayout());
                    scroll.setViewportView(editorPropertiesPanel);
                    scroll.getVerticalScrollBar().setUnitIncrement(70);
                }
            }
        }
        {
            JSplitPane rightSplitPane = new JSplitPane(JSplitPane.VERTICAL_SPLIT);
            rightSplitPane.setUI(new BasicSplitPaneUI() {

                public void paint(Graphics g, JComponent jc) {
                }
            });
            rightSplitPane.setDividerSize(4);
            rightSplitPane.setDividerLocation(100);
            rightSplit.add(rightSplitPane, JSplitPane.BOTTOM);
            JPanel propertiesPanel = new JPanel(new GridBagLayout());
            rightSplitPane.add(propertiesPanel, JSplitPane.TOP);
            propertiesPanel.setBorder(new CompoundBorder(BorderFactory.createEmptyBorder(3, 0, 6, 6), BorderFactory.createTitledBorder("Influencers")));
            {
                JScrollPane scroll = new JScrollPane();
                propertiesPanel.add(scroll, new GridBagConstraints(0, 0, 1, 1, 1, 1, GridBagConstraints.NORTH, GridBagConstraints.BOTH, new Insets(0, 0, 0, 0), 0, 0));
                scroll.setBorder(BorderFactory.createEmptyBorder(0, 0, 0, 0));
                {
                    JPanel influencersPanel = new JPanel(new GridBagLayout());
                    influencerBox = new JComboBox(new DefaultComboBoxModel());
                    JButton addInfluencerButton = new JButton("Add");
                    addInfluencerButton.addActionListener(new ActionListener() {

                        @Override
                        public void actionPerformed(ActionEvent e) {
                            InfluencerWrapper wrapper = (InfluencerWrapper) influencerBox.getSelectedItem();
                            ParticleController controller = getEmitter();
                            if (controller != null)
                                addInfluencer(wrapper.type, controller);
                        }
                    });
                    influencersPanel.add(influencerBox, new GridBagConstraints(0, 0, 1, 1, 0, 1, GridBagConstraints.NORTHWEST, GridBagConstraints.NONE, new Insets(0, 0, 0, 0), 0, 0));
                    influencersPanel.add(addInfluencerButton, new GridBagConstraints(1, 0, 1, 1, 1, 1, GridBagConstraints.NORTHWEST, GridBagConstraints.NONE, new Insets(0, 0, 0, 0), 0, 0));
                    scroll.setViewportView(influencersPanel);
                    scroll.getVerticalScrollBar().setUnitIncrement(70);
                }
            }
            propertiesPanel = new JPanel(new GridBagLayout());
            rightSplitPane.add(propertiesPanel, JSplitPane.BOTTOM);
            propertiesPanel.setBorder(new CompoundBorder(BorderFactory.createEmptyBorder(3, 0, 6, 6), BorderFactory.createTitledBorder("Particle Controller Components")));
            {
                JScrollPane scroll = new JScrollPane();
                propertiesPanel.add(scroll, new GridBagConstraints(0, 0, 1, 1, 1, 1, GridBagConstraints.NORTH, GridBagConstraints.BOTH, new Insets(0, 0, 0, 0), 0, 0));
                scroll.setBorder(BorderFactory.createEmptyBorder(0, 0, 0, 0));
                {
                    controllerPropertiesPanel = new JPanel(new GridBagLayout());
                    scroll.setViewportView(controllerPropertiesPanel);
                    scroll.getVerticalScrollBar().setUnitIncrement(70);
                }
            }
        }
        rightSplit.setDividerLocation(250);
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
            emittersPanel.setBorder(new CompoundBorder(BorderFactory.createEmptyBorder(0, 6, 6, 0), BorderFactory.createTitledBorder("Particle Controllers")));
            {
                effectPanel = new EffectPanel(this);
                emittersPanel.add(effectPanel);
            }
        }
        leftSplit.setDividerLocation(625);
    }
    splitPane.setDividerLocation(500);
}
