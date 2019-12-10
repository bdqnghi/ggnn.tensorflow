private void initializeEvents() {
    fontList.addListSelectionListener(new ListSelectionListener() {

        public void valueChanged(ListSelectionEvent evt) {
            if (evt.getValueIsAdjusting())
                return;
            prefs.put("system.font", (String) fontList.getSelectedValue());
            updateFont();
        }
    });
    class FontUpdateListener implements ChangeListener, ActionListener {

        public void stateChanged(ChangeEvent evt) {
            updateFont();
        }

        public void actionPerformed(ActionEvent evt) {
            updateFont();
        }

        public void addSpinners(JSpinner[] spinners) {
            for (int i = 0; i < spinners.length; i++) {
                final JSpinner spinner = spinners[i];
                spinner.addChangeListener(this);
                ((JSpinner.DefaultEditor) spinner.getEditor()).getTextField().addKeyListener(new KeyAdapter() {

                    String lastText;

                    public void keyReleased(KeyEvent evt) {
                        JFormattedTextField textField = ((JSpinner.DefaultEditor) spinner.getEditor()).getTextField();
                        String text = textField.getText();
                        if (text.length() == 0)
                            return;
                        if (text.equals(lastText))
                            return;
                        lastText = text;
                        int caretPosition = textField.getCaretPosition();
                        try {
                            spinner.setValue(Integer.valueOf(text));
                        } catch (NumberFormatException ex) {
                        }
                        textField.setCaretPosition(caretPosition);
                    }
                });
            }
        }
    }
    FontUpdateListener listener = new FontUpdateListener();
    listener.addSpinners(new JSpinner[] { padTopSpinner, padRightSpinner, padBottomSpinner, padLeftSpinner, padAdvanceXSpinner, padAdvanceYSpinner });
    fontSizeSpinner.addChangeListener(listener);
    gammaSpinner.addChangeListener(listener);
    glyphPageWidthCombo.addActionListener(listener);
    glyphPageHeightCombo.addActionListener(listener);
    boldCheckBox.addActionListener(listener);
    italicCheckBox.addActionListener(listener);
    monoCheckBox.addActionListener(listener);
    resetCacheButton.addActionListener(listener);
    javaRadio.addActionListener(listener);
    nativeRadio.addActionListener(listener);
    freeTypeRadio.addActionListener(listener);
    sampleTextRadio.addActionListener(new ActionListener() {

        public void actionPerformed(ActionEvent evt) {
            glyphCachePanel.setVisible(false);
        }
    });
    glyphCacheRadio.addActionListener(new ActionListener() {

        public void actionPerformed(ActionEvent evt) {
            glyphCachePanel.setVisible(true);
        }
    });
    fontFileText.getDocument().addDocumentListener(new DocumentListener() {

        public void removeUpdate(DocumentEvent evt) {
            changed();
        }

        public void insertUpdate(DocumentEvent evt) {
            changed();
        }

        public void changedUpdate(DocumentEvent evt) {
            changed();
        }

        private void changed() {
            File file = new File(fontFileText.getText());
            if (fontList.isEnabled() && (!file.exists() || !file.isFile()))
                return;
            prefs.put("font.file", fontFileText.getText());
            updateFont();
        }
    });
    final ActionListener al = new ActionListener() {

        public void actionPerformed(ActionEvent evt) {
            updateFontSelector();
            updateFont();
        }
    };
    systemFontRadio.addActionListener(al);
    fontFileRadio.addActionListener(al);
    browseButton.addActionListener(new ActionListener() {

        public void actionPerformed(ActionEvent evt) {
            FileDialog dialog = new FileDialog(Hiero.this, "Choose TrueType font file", FileDialog.LOAD);
            dialog.setLocationRelativeTo(null);
            dialog.setFile("*.ttf");
            dialog.setDirectory(prefs.get("dir.font", ""));
            dialog.setVisible(true);
            if (dialog.getDirectory() != null) {
                prefs.put("dir.font", dialog.getDirectory());
            }
            String fileName = dialog.getFile();
            if (fileName == null)
                return;
            fontFileText.setText(new File(dialog.getDirectory(), fileName).getAbsolutePath());
        }
    });
    backgroundColorLabel.addMouseListener(new MouseAdapter() {

        public void mouseClicked(MouseEvent evt) {
            java.awt.Color color = JColorChooser.showDialog(null, "Choose a background color", EffectUtil.fromString(prefs.get("background", "000000")));
            if (color == null)
                return;
            renderingBackgroundColor = new Color(color.getRed() / 255f, color.getGreen() / 255f, color.getBlue() / 255f, 1);
            backgroundColorLabel.setIcon(getColorIcon(color));
            prefs.put("background", EffectUtil.toString(color));
        }
    });
    effectsList.addListSelectionListener(new ListSelectionListener() {

        public void valueChanged(ListSelectionEvent evt) {
            ConfigurableEffect selectedEffect = (ConfigurableEffect) effectsList.getSelectedValue();
            boolean enabled = selectedEffect != null;
            for (Iterator iter = effectPanels.iterator(); iter.hasNext(); ) {
                ConfigurableEffect effect = ((EffectPanel) iter.next()).getEffect();
                if (effect == selectedEffect) {
                    enabled = false;
                    break;
                }
            }
            addEffectButton.setEnabled(enabled);
        }
    });
    effectsList.addMouseListener(new MouseAdapter() {

        public void mouseClicked(MouseEvent evt) {
            if (evt.getClickCount() == 2 && addEffectButton.isEnabled())
                addEffectButton.doClick();
        }
    });
    addEffectButton.addActionListener(new ActionListener() {

        public void actionPerformed(ActionEvent evt) {
            new EffectPanel((ConfigurableEffect) effectsList.getSelectedValue());
        }
    });
    openMenuItem.addActionListener(new ActionListener() {

        public void actionPerformed(ActionEvent evt) {
            FileDialog dialog = new FileDialog(Hiero.this, "Open Hiero settings file", FileDialog.LOAD);
            dialog.setLocationRelativeTo(null);
            dialog.setFile("*.hiero");
            dialog.setDirectory(prefs.get("dir.open", ""));
            dialog.setVisible(true);
            if (dialog.getDirectory() != null) {
                prefs.put("dir.open", dialog.getDirectory());
            }
            String fileName = dialog.getFile();
            if (fileName == null)
                return;
            lastOpenFilename = fileName;
            open(new File(dialog.getDirectory(), fileName));
        }
    });
    saveMenuItem.addActionListener(new ActionListener() {

        public void actionPerformed(ActionEvent evt) {
            FileDialog dialog = new FileDialog(Hiero.this, "Save Hiero settings file", FileDialog.SAVE);
            dialog.setLocationRelativeTo(null);
            dialog.setFile("*.hiero");
            dialog.setDirectory(prefs.get("dir.save", ""));
            if (lastSaveFilename.length() > 0) {
                dialog.setFile(lastSaveFilename);
            } else if (lastOpenFilename.length() > 0) {
                dialog.setFile(lastOpenFilename);
            }
            dialog.setVisible(true);
            if (dialog.getDirectory() != null) {
                prefs.put("dir.save", dialog.getDirectory());
            }
            String fileName = dialog.getFile();
            if (fileName == null)
                return;
            if (!fileName.endsWith(".hiero"))
                fileName += ".hiero";
            lastSaveFilename = fileName;
            File file = new File(dialog.getDirectory(), fileName);
            try {
                save(file);
            } catch (IOException ex) {
                throw new RuntimeException("Error saving Hiero settings file: " + file.getAbsolutePath(), ex);
            }
        }
    });
    saveBMFontMenuItem.addActionListener(new ActionListener() {

        public void actionPerformed(ActionEvent evt) {
            FileDialog dialog = new FileDialog(Hiero.this, "Save BMFont files", FileDialog.SAVE);
            dialog.setLocationRelativeTo(null);
            dialog.setFile("*.fnt");
            dialog.setDirectory(prefs.get("dir.savebm", ""));
            if (lastSaveBMFilename.length() > 0) {
                dialog.setFile(lastSaveBMFilename);
            } else if (lastOpenFilename.length() > 0) {
                dialog.setFile(lastOpenFilename.replace(".hiero", ".fnt"));
            }
            dialog.setVisible(true);
            if (dialog.getDirectory() != null) {
                prefs.put("dir.savebm", dialog.getDirectory());
            }
            String fileName = dialog.getFile();
            if (fileName == null)
                return;
            lastSaveBMFilename = fileName;
            saveBm(new File(dialog.getDirectory(), fileName));
        }
    });
    exitMenuItem.addActionListener(new ActionListener() {

        public void actionPerformed(ActionEvent evt) {
            dispose();
        }
    });
    sampleNeheButton.addActionListener(new ActionListener() {

        public void actionPerformed(ActionEvent evt) {
            sampleTextPane.setText(NEHE_CHARS);
            resetCacheButton.doClick();
        }
    });
    sampleAsciiButton.addActionListener(new ActionListener() {

        public void actionPerformed(ActionEvent evt) {
            StringBuilder buffer = new StringBuilder();
            buffer.append(NEHE_CHARS);
            buffer.append('\n');
            int count = 0;
            for (int i = 33; i <= 255; i++) {
                if (buffer.indexOf(Character.toString((char) i)) != -1)
                    continue;
                buffer.append((char) i);
                if (++count % 30 == 0)
                    buffer.append('\n');
            }
            sampleTextPane.setText(buffer.toString());
            resetCacheButton.doClick();
        }
    });
    sampleExtendedButton.addActionListener(new ActionListener() {

        public void actionPerformed(ActionEvent evt) {
            sampleTextPane.setText(EXTENDED_CHARS);
            resetCacheButton.doClick();
        }
    });
}
