private void initializeComponents() {
    getContentPane().setLayout(new GridBagLayout());
    JPanel leftSidePanel = new JPanel();
    leftSidePanel.setLayout(new GridBagLayout());
    getContentPane().add(leftSidePanel, new GridBagConstraints(0, 1, 1, 1, 1.0, 1.0, GridBagConstraints.CENTER, GridBagConstraints.BOTH, new Insets(0, 0, 0, 0), 0, 0));
    {
        JPanel fontPanel = new JPanel();
        leftSidePanel.add(fontPanel, new GridBagConstraints(0, 0, 1, 1, 0.0, 0.0, GridBagConstraints.CENTER, GridBagConstraints.BOTH, new Insets(5, 5, 5, 5), 0, 0));
        fontPanel.setLayout(new GridBagLayout());
        fontPanel.setBorder(BorderFactory.createTitledBorder("Font"));
        {
            fontSizeSpinner = new JSpinner(new SpinnerNumberModel(32, 0, 256, 1));
            fontPanel.add(fontSizeSpinner, new GridBagConstraints(1, 3, 1, 1, 0.0, 0.0, GridBagConstraints.WEST, GridBagConstraints.NONE, new Insets(0, 0, 5, 10), 0, 0));
            ((JSpinner.DefaultEditor) fontSizeSpinner.getEditor()).getTextField().setColumns(2);
        }
        {
            JScrollPane fontScroll = new JScrollPane();
            fontPanel.add(fontScroll, new GridBagConstraints(1, 1, 3, 1, 1.0, 1.0, GridBagConstraints.CENTER, GridBagConstraints.BOTH, new Insets(0, 0, 5, 5), 0, 0));
            {
                fontListModel = new DefaultComboBoxModel(GraphicsEnvironment.getLocalGraphicsEnvironment().getAvailableFontFamilyNames());
                fontList = new JList();
                fontScroll.setViewportView(fontList);
                fontList.setModel(fontListModel);
                fontList.setVisibleRowCount(6);
                fontList.setSelectedIndex(0);
                fontScroll.setMinimumSize(new Dimension(220, fontList.getPreferredScrollableViewportSize().height));
            }
        }
        {
            systemFontRadio = new JRadioButton("System:", true);
            fontPanel.add(systemFontRadio, new GridBagConstraints(0, 1, 1, 1, 0.0, 0.0, GridBagConstraints.NORTHEAST, GridBagConstraints.NONE, new Insets(0, 5, 0, 5), 0, 0));
            systemFontRadio.setMargin(new Insets(0, 0, 0, 0));
        }
        {
            fontFileRadio = new JRadioButton("File:");
            fontPanel.add(fontFileRadio, new GridBagConstraints(0, 2, 1, 1, 0.0, 0.0, GridBagConstraints.EAST, GridBagConstraints.NONE, new Insets(0, 5, 5, 5), 0, 0));
            fontFileRadio.setMargin(new Insets(0, 0, 0, 0));
        }
        {
            fontFileText = new JTextField();
            fontPanel.add(fontFileText, new GridBagConstraints(1, 2, 2, 1, 1.0, 0.0, GridBagConstraints.CENTER, GridBagConstraints.HORIZONTAL, new Insets(0, 0, 5, 0), 0, 0));
        }
        {
            fontPanel.add(new JLabel("Size:"), new GridBagConstraints(0, 3, 1, 1, 0.0, 0.0, GridBagConstraints.EAST, GridBagConstraints.NONE, new Insets(0, 0, 5, 5), 0, 0));
        }
        {
            unicodePanel = new JPanel(new GridBagLayout());
            fontPanel.add(unicodePanel, new GridBagConstraints(2, 3, 2, 1, 0.0, 0.0, GridBagConstraints.EAST, GridBagConstraints.HORIZONTAL, new Insets(0, 0, 0, 5), 0, 0));
            {
                boldCheckBox = new JCheckBox("Bold");
                unicodePanel.add(boldCheckBox, new GridBagConstraints(0, 0, 1, 1, 0.0, 0.0, GridBagConstraints.CENTER, GridBagConstraints.NONE, new Insets(0, 0, 5, 5), 0, 0));
            }
            {
                italicCheckBox = new JCheckBox("Italic");
                unicodePanel.add(italicCheckBox, new GridBagConstraints(1, 0, 1, 1, 1.0, 0.0, GridBagConstraints.WEST, GridBagConstraints.NONE, new Insets(0, 0, 5, 5), 0, 0));
            }
        }
        {
            bitmapPanel = new JPanel(new GridBagLayout());
            fontPanel.add(bitmapPanel, new GridBagConstraints(2, 3, 2, 1, 1.0, 0.0, GridBagConstraints.WEST, GridBagConstraints.NONE, new Insets(0, 0, 0, 5), 0, 0));
            {
                bitmapPanel.add(new JLabel("Gamma:"), new GridBagConstraints(0, 0, 1, 1, 0.0, 0.0, GridBagConstraints.EAST, GridBagConstraints.NONE, new Insets(0, 0, 5, 5), 0, 0));
            }
            {
                gammaSpinner = new JSpinner(new SpinnerNumberModel(1.8f, 0, 30, 0.01));
                ((JSpinner.DefaultEditor) gammaSpinner.getEditor()).getTextField().setColumns(2);
                bitmapPanel.add(gammaSpinner, new GridBagConstraints(1, 0, 1, 1, 0.0, 0.0, GridBagConstraints.EAST, GridBagConstraints.NONE, new Insets(0, 0, 5, 10), 0, 0));
            }
            {
                monoCheckBox = new JCheckBox("Mono");
                bitmapPanel.add(monoCheckBox, new GridBagConstraints(2, 0, 1, 1, 0.0, 0.0, GridBagConstraints.EAST, GridBagConstraints.NONE, new Insets(0, 0, 5, 5), 0, 0));
            }
        }
        {
            browseButton = new JButton("...");
            fontPanel.add(browseButton, new GridBagConstraints(3, 2, 1, 1, 0.0, 0.0, GridBagConstraints.CENTER, GridBagConstraints.NONE, new Insets(0, 0, 5, 5), 0, 0));
            browseButton.setMargin(new Insets(0, 0, 0, 0));
        }
        {
            fontPanel.add(new JLabel("Rendering:"), new GridBagConstraints(0, 4, 1, 1, 0.0, 0.0, GridBagConstraints.NORTHEAST, GridBagConstraints.NONE, new Insets(0, 0, 5, 5), 0, 0));
        }
        {
            JPanel renderingPanel = new JPanel(new GridBagLayout());
            fontPanel.add(renderingPanel, new GridBagConstraints(1, 4, 3, 1, 0.0, 0.0, GridBagConstraints.NORTHWEST, GridBagConstraints.NONE, new Insets(0, 0, 0, 0), 0, 0));
            {
                freeTypeRadio = new JRadioButton("FreeType");
                renderingPanel.add(freeTypeRadio, new GridBagConstraints(0, 0, 1, 1, 0.0, 0.0, GridBagConstraints.CENTER, GridBagConstraints.NONE, new Insets(0, 0, 5, 5), 0, 0));
            }
            {
                javaRadio = new JRadioButton("Java");
                renderingPanel.add(javaRadio, new GridBagConstraints(1, 0, 1, 1, 0.0, 0.0, GridBagConstraints.CENTER, GridBagConstraints.NONE, new Insets(0, 0, 5, 5), 0, 0));
            }
            {
                nativeRadio = new JRadioButton("Native");
                renderingPanel.add(nativeRadio, new GridBagConstraints(2, 0, 1, 1, 1.0, 0.0, GridBagConstraints.WEST, GridBagConstraints.NONE, new Insets(0, 0, 5, 5), 0, 0));
            }
        }
        ButtonGroup buttonGroup = new ButtonGroup();
        buttonGroup.add(systemFontRadio);
        buttonGroup.add(fontFileRadio);
        buttonGroup = new ButtonGroup();
        buttonGroup.add(freeTypeRadio);
        buttonGroup.add(javaRadio);
        buttonGroup.add(nativeRadio);
        freeTypeRadio.setSelected(true);
    }
    {
        JPanel samplePanel = new JPanel();
        leftSidePanel.add(samplePanel, new GridBagConstraints(1, 0, 1, 1, 1.0, 0.0, GridBagConstraints.CENTER, GridBagConstraints.BOTH, new Insets(5, 0, 5, 5), 0, 0));
        samplePanel.setLayout(new GridBagLayout());
        samplePanel.setBorder(BorderFactory.createTitledBorder("Sample Text"));
        {
            JScrollPane textScroll = new JScrollPane();
            samplePanel.add(textScroll, new GridBagConstraints(0, 0, 4, 1, 1.0, 1.0, GridBagConstraints.CENTER, GridBagConstraints.BOTH, new Insets(0, 5, 5, 5), 0, 0));
            {
                sampleTextPane = new JTextPane();
                textScroll.setViewportView(sampleTextPane);
            }
        }
        {
            sampleNeheButton = new JButton();
            sampleNeheButton.setText("NEHE");
            samplePanel.add(sampleNeheButton, new GridBagConstraints(2, 1, 1, 1, 0.0, 0.0, GridBagConstraints.CENTER, GridBagConstraints.NONE, new Insets(0, 0, 5, 5), 0, 0));
        }
        {
            sampleAsciiButton = new JButton();
            sampleAsciiButton.setText("ASCII");
            samplePanel.add(sampleAsciiButton, new GridBagConstraints(3, 1, 1, 1, 0, 0.0, GridBagConstraints.EAST, GridBagConstraints.NONE, new Insets(0, 0, 5, 5), 0, 0));
        }
        {
            sampleExtendedButton = new JButton();
            sampleExtendedButton.setText("Extended");
            samplePanel.add(sampleExtendedButton, new GridBagConstraints(1, 1, 1, 1, 1.0, 0.0, GridBagConstraints.EAST, GridBagConstraints.NONE, new Insets(0, 0, 5, 5), 0, 0));
        }
    }
    {
        JPanel renderingPanel = new JPanel();
        leftSidePanel.add(renderingPanel, new GridBagConstraints(0, 1, 2, 1, 1.0, 1.0, GridBagConstraints.CENTER, GridBagConstraints.BOTH, new Insets(0, 5, 5, 5), 0, 0));
        renderingPanel.setBorder(BorderFactory.createTitledBorder("Rendering"));
        renderingPanel.setLayout(new GridBagLayout());
        {
            JPanel wrapperPanel = new JPanel();
            renderingPanel.add(wrapperPanel, new GridBagConstraints(0, 1, 1, 1, 1.0, 1.0, GridBagConstraints.CENTER, GridBagConstraints.BOTH, new Insets(0, 5, 5, 5), 0, 0));
            wrapperPanel.setLayout(new BorderLayout());
            wrapperPanel.setBackground(java.awt.Color.white);
            {
                gamePanel = new JPanel();
                wrapperPanel.add(gamePanel);
                gamePanel.setLayout(new BorderLayout());
                gamePanel.setBackground(java.awt.Color.white);
            }
        }
        {
            glyphCachePanel = new JPanel() {

                private int maxWidth;

                public Dimension getPreferredSize() {
                    // Keep glyphCachePanel width from ever going down so the CanvasGameContainer doesn't change sizes and flicker.
                    Dimension size = super.getPreferredSize();
                    maxWidth = Math.max(maxWidth, size.width);
                    size.width = maxWidth;
                    return size;
                }
            };
            glyphCachePanel.setVisible(false);
            renderingPanel.add(glyphCachePanel, new GridBagConstraints(1, 1, 1, 1, 0.0, 0.0, GridBagConstraints.NORTH, GridBagConstraints.HORIZONTAL, new Insets(0, 0, 0, 0), 0, 0));
            glyphCachePanel.setLayout(new GridBagLayout());
            {
                glyphCachePanel.add(new JLabel("Glyphs:"), new GridBagConstraints(0, 4, 1, 1, 0.0, 0.0, GridBagConstraints.EAST, GridBagConstraints.NONE, new Insets(0, 5, 5, 5), 0, 0));
            }
            {
                glyphCachePanel.add(new JLabel("Pages:"), new GridBagConstraints(0, 3, 1, 1, 0.0, 0.0, GridBagConstraints.EAST, GridBagConstraints.NONE, new Insets(0, 5, 5, 5), 0, 0));
            }
            {
                glyphCachePanel.add(new JLabel("Page width:"), new GridBagConstraints(0, 1, 1, 1, 0.0, 0.0, GridBagConstraints.EAST, GridBagConstraints.NONE, new Insets(0, 5, 5, 5), 0, 0));
            }
            {
                glyphCachePanel.add(new JLabel("Page height:"), new GridBagConstraints(0, 2, 1, 1, 0.0, 0.0, GridBagConstraints.EAST, GridBagConstraints.NONE, new Insets(0, 5, 5, 5), 0, 0));
            }
            {
                glyphPageWidthCombo = new JComboBox(new DefaultComboBoxModel(new Integer[] { new Integer(32), new Integer(64), new Integer(128), new Integer(256), new Integer(512), new Integer(1024), new Integer(2048) }));
                glyphCachePanel.add(glyphPageWidthCombo, new GridBagConstraints(1, 1, 1, 1, 0.0, 0.0, GridBagConstraints.WEST, GridBagConstraints.NONE, new Insets(0, 0, 5, 5), 0, 0));
                glyphPageWidthCombo.setSelectedIndex(4);
            }
            {
                glyphPageHeightCombo = new JComboBox(new DefaultComboBoxModel(new Integer[] { new Integer(32), new Integer(64), new Integer(128), new Integer(256), new Integer(512), new Integer(1024), new Integer(2048) }));
                glyphCachePanel.add(glyphPageHeightCombo, new GridBagConstraints(1, 2, 1, 1, 0.0, 0.0, GridBagConstraints.WEST, GridBagConstraints.NONE, new Insets(0, 0, 5, 5), 0, 0));
                glyphPageHeightCombo.setSelectedIndex(4);
            }
            {
                resetCacheButton = new JButton("Reset Cache");
                glyphCachePanel.add(resetCacheButton, new GridBagConstraints(0, 6, 2, 1, 1.0, 0.0, GridBagConstraints.CENTER, GridBagConstraints.NONE, new Insets(0, 5, 5, 5), 0, 0));
            }
            {
                glyphPagesTotalLabel = new JLabel("1");
                glyphCachePanel.add(glyphPagesTotalLabel, new GridBagConstraints(1, 3, 1, 1, 0.0, 0.0, GridBagConstraints.WEST, GridBagConstraints.NONE, new Insets(0, 0, 5, 5), 0, 0));
            }
            {
                glyphsTotalLabel = new JLabel("0");
                glyphCachePanel.add(glyphsTotalLabel, new GridBagConstraints(1, 4, 1, 1, 0.0, 0.0, GridBagConstraints.WEST, GridBagConstraints.NONE, new Insets(0, 0, 5, 5), 0, 0));
            }
            {
                glyphPageComboModel = new DefaultComboBoxModel();
                glyphPageCombo = new JComboBox();
                glyphCachePanel.add(glyphPageCombo, new GridBagConstraints(1, 0, 1, 1, 0.0, 0.0, GridBagConstraints.WEST, GridBagConstraints.NONE, new Insets(0, 0, 5, 5), 0, 0));
                glyphPageCombo.setModel(glyphPageComboModel);
            }
            {
                glyphCachePanel.add(new JLabel("View:"), new GridBagConstraints(0, 0, 1, 1, 0.0, 0.0, GridBagConstraints.EAST, GridBagConstraints.NONE, new Insets(0, 5, 5, 5), 0, 0));
            }
        }
        {
            JPanel radioButtonsPanel = new JPanel();
            renderingPanel.add(radioButtonsPanel, new GridBagConstraints(0, 0, 2, 1, 0.0, 0.0, GridBagConstraints.CENTER, GridBagConstraints.BOTH, new Insets(0, 0, 0, 0), 0, 0));
            radioButtonsPanel.setLayout(new GridBagLayout());
            {
                sampleTextRadio = new JRadioButton("Sample text");
                radioButtonsPanel.add(sampleTextRadio, new GridBagConstraints(2, 0, 1, 1, 0.0, 0.0, GridBagConstraints.CENTER, GridBagConstraints.NONE, new Insets(0, 0, 5, 5), 0, 0));
                sampleTextRadio.setSelected(true);
            }
            {
                glyphCacheRadio = new JRadioButton("Glyph cache");
                radioButtonsPanel.add(glyphCacheRadio, new GridBagConstraints(3, 0, 1, 1, 0.0, 0.0, GridBagConstraints.CENTER, GridBagConstraints.NONE, new Insets(0, 0, 5, 5), 0, 0));
            }
            {
                radioButtonsPanel.add(new JLabel("Background:"), new GridBagConstraints(0, 0, 1, 1, 0.0, 0.0, GridBagConstraints.CENTER, GridBagConstraints.NONE, new Insets(0, 5, 5, 5), 0, 0));
            }
            {
                backgroundColorLabel = new JLabel();
                radioButtonsPanel.add(backgroundColorLabel, new GridBagConstraints(1, 0, 1, 1, 1.0, 0.0, GridBagConstraints.WEST, GridBagConstraints.NONE, new Insets(0, 0, 5, 5), 0, 0));
            }
            ButtonGroup buttonGroup = new ButtonGroup();
            buttonGroup.add(glyphCacheRadio);
            buttonGroup.add(sampleTextRadio);
        }
    }
    JPanel rightSidePanel = new JPanel();
    rightSidePanel.setLayout(new GridBagLayout());
    getContentPane().add(rightSidePanel, new GridBagConstraints(1, 0, 1, 2, 0.0, 0.0, GridBagConstraints.CENTER, GridBagConstraints.BOTH, new Insets(0, 0, 0, 0), 0, 0));
    {
        JPanel paddingPanel = new JPanel();
        paddingPanel.setLayout(new GridBagLayout());
        rightSidePanel.add(paddingPanel, new GridBagConstraints(0, 1, 1, 1, 0.0, 0.0, GridBagConstraints.CENTER, GridBagConstraints.BOTH, new Insets(0, 0, 5, 5), 0, 0));
        paddingPanel.setBorder(BorderFactory.createTitledBorder("Padding"));
        {
            padTopSpinner = new JSpinner(new SpinnerNumberModel(1, 0, 999, 1));
            paddingPanel.add(padTopSpinner, new GridBagConstraints(1, 1, 1, 1, 0.0, 0.0, GridBagConstraints.CENTER, GridBagConstraints.NONE, new Insets(0, 0, 0, 0), 0, 0));
            ((JSpinner.DefaultEditor) padTopSpinner.getEditor()).getTextField().setColumns(2);
        }
        {
            padRightSpinner = new JSpinner(new SpinnerNumberModel(1, 0, 999, 1));
            paddingPanel.add(padRightSpinner, new GridBagConstraints(2, 2, 1, 1, 1.0, 0.0, GridBagConstraints.WEST, GridBagConstraints.NONE, new Insets(0, 0, 0, 5), 0, 0));
            ((JSpinner.DefaultEditor) padRightSpinner.getEditor()).getTextField().setColumns(2);
        }
        {
            padLeftSpinner = new JSpinner(new SpinnerNumberModel(1, 0, 999, 1));
            paddingPanel.add(padLeftSpinner, new GridBagConstraints(0, 2, 1, 1, 1.0, 0.0, GridBagConstraints.EAST, GridBagConstraints.NONE, new Insets(0, 5, 0, 0), 0, 0));
            ((JSpinner.DefaultEditor) padLeftSpinner.getEditor()).getTextField().setColumns(2);
        }
        {
            padBottomSpinner = new JSpinner(new SpinnerNumberModel(1, 0, 999, 1));
            paddingPanel.add(padBottomSpinner, new GridBagConstraints(1, 3, 1, 1, 0.0, 0.0, GridBagConstraints.CENTER, GridBagConstraints.NONE, new Insets(0, 0, 0, 0), 0, 0));
            ((JSpinner.DefaultEditor) padBottomSpinner.getEditor()).getTextField().setColumns(2);
        }
        {
            JPanel advancePanel = new JPanel();
            FlowLayout advancePanelLayout = new FlowLayout();
            advancePanel.setLayout(advancePanelLayout);
            paddingPanel.add(advancePanel, new GridBagConstraints(0, 4, 3, 1, 1.0, 0.0, GridBagConstraints.CENTER, GridBagConstraints.NONE, new Insets(0, 0, 0, 0), 0, 0));
            {
                advancePanel.add(new JLabel("X:"));
            }
            {
                padAdvanceXSpinner = new JSpinner(new SpinnerNumberModel(-2, -999, 999, 1));
                advancePanel.add(padAdvanceXSpinner);
                ((JSpinner.DefaultEditor) padAdvanceXSpinner.getEditor()).getTextField().setColumns(2);
            }
            {
                advancePanel.add(new JLabel("Y:"));
            }
            {
                padAdvanceYSpinner = new JSpinner(new SpinnerNumberModel(-2, -999, 999, 1));
                advancePanel.add(padAdvanceYSpinner);
                ((JSpinner.DefaultEditor) padAdvanceYSpinner.getEditor()).getTextField().setColumns(2);
            }
        }
    }
    {
        effectsPanel = new JPanel();
        effectsPanel.setLayout(new GridBagLayout());
        rightSidePanel.add(effectsPanel, new GridBagConstraints(0, 0, 1, 1, 1.0, 1.0, GridBagConstraints.CENTER, GridBagConstraints.BOTH, new Insets(5, 0, 5, 5), 0, 0));
        effectsPanel.setBorder(BorderFactory.createTitledBorder("Effects"));
        effectsPanel.setMinimumSize(new Dimension(210, 1));
        {
            effectsScroll = new JScrollPane();
            effectsPanel.add(effectsScroll, new GridBagConstraints(1, 0, 1, 1, 1.0, 0.0, GridBagConstraints.NORTH, GridBagConstraints.HORIZONTAL, new Insets(0, 5, 5, 5), 0, 0));
            {
                effectsListModel = new DefaultComboBoxModel();
                effectsList = new JList();
                effectsScroll.setViewportView(effectsList);
                effectsList.setModel(effectsListModel);
                effectsList.setVisibleRowCount(7);
                effectsScroll.setMinimumSize(effectsList.getPreferredScrollableViewportSize());
            }
        }
        {
            addEffectButton = new JButton("Add");
            effectsPanel.add(addEffectButton, new GridBagConstraints(1, 1, 1, 1, 0.0, 0.0, GridBagConstraints.EAST, GridBagConstraints.NONE, new Insets(0, 5, 6, 5), 0, 0));
            addEffectButton.setEnabled(false);
        }
        {
            appliedEffectsScroll = new JScrollPane();
            effectsPanel.add(appliedEffectsScroll, new GridBagConstraints(1, 3, 1, 1, 1.0, 1.0, GridBagConstraints.NORTH, GridBagConstraints.BOTH, new Insets(0, 0, 5, 0), 0, 0));
            appliedEffectsScroll.setBorder(new EmptyBorder(0, 0, 0, 0));
            appliedEffectsScroll.setHorizontalScrollBarPolicy(ScrollPaneConstants.HORIZONTAL_SCROLLBAR_NEVER);
            {
                JPanel panel = new JPanel();
                panel.setLayout(new GridBagLayout());
                appliedEffectsScroll.setViewportView(panel);
                {
                    appliedEffectsPanel = new JPanel();
                    appliedEffectsPanel.setLayout(new GridBagLayout());
                    panel.add(appliedEffectsPanel, new GridBagConstraints(0, 0, 1, 1, 1.0, 1.0, GridBagConstraints.NORTH, GridBagConstraints.HORIZONTAL, new Insets(0, 0, 0, 0), 0, 0));
                    appliedEffectsPanel.setBorder(BorderFactory.createMatteBorder(1, 0, 0, 0, java.awt.Color.black));
                }
            }
        }
    }
}
