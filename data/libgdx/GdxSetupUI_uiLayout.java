private void uiLayout() {
    setLayout(new GridBagLayout());
    add(nameLabel, new GridBagConstraints(0, 0, 1, 1, 0, 0, EAST, NONE, new Insets(0, 0, 6, 6), 0, 0));
    add(nameText, new GridBagConstraints(1, 0, 2, 1, 1, 0, CENTER, HORIZONTAL, new Insets(0, 0, 6, 0), 0, 0));
    add(packageLabel, new GridBagConstraints(0, 1, 1, 1, 0, 0, EAST, NONE, new Insets(0, 0, 6, 6), 0, 0));
    add(packageText, new GridBagConstraints(1, 1, 2, 1, 1, 0, CENTER, HORIZONTAL, new Insets(0, 0, 6, 0), 0, 0));
    add(gameClassLabel, new GridBagConstraints(0, 2, 1, 1, 0, 0, EAST, NONE, new Insets(0, 0, 6, 6), 0, 0));
    add(gameClassText, new GridBagConstraints(1, 2, 2, 1, 1, 0, CENTER, HORIZONTAL, new Insets(0, 0, 6, 0), 0, 0));
    add(destinationLabel, new GridBagConstraints(0, 3, 1, 1, 0, 0, EAST, NONE, new Insets(0, 0, 0, 6), 0, 0));
    add(destinationText, new GridBagConstraints(1, 3, 1, 1, 1, 0, CENTER, HORIZONTAL, new Insets(0, 0, 0, 0), 0, 0));
    add(destinationButton, new GridBagConstraints(2, 3, 1, 1, 0, 0, CENTER, NONE, new Insets(0, 6, 0, 0), 0, 0));
    if (System.getenv("ANDROID_HOME") != null) {
        sdkLocationText.setText(System.getenv("ANDROID_HOME"));
    }
    add(sdkLocationLabel, new GridBagConstraints(0, 4, 1, 1, 0, 0, EAST, NONE, new Insets(0, 0, 0, 6), 0, 0));
    add(sdkLocationText, new GridBagConstraints(1, 4, 1, 1, 1, 0, CENTER, HORIZONTAL, new Insets(0, 0, 0, 0), 0, 0));
    add(sdkLocationButton, new GridBagConstraints(2, 4, 1, 1, 0, 0, CENTER, NONE, new Insets(0, 6, 0, 0), 0, 0));
    for (final ProjectType projectType : ProjectType.values()) {
        if (projectType.equals(ProjectType.CORE)) {
            continue;
        }
        modules.add(projectType);
        SetupCheckBox checkBox = new SetupCheckBox(projectType.getName().substring(0, 1).toUpperCase() + projectType.getName().substring(1, projectType.getName().length()));
        checkBox.setSelected(true);
        subProjectsPanel.add(checkBox);
        checkBox.addItemListener(new ItemListener() {

            @Override
            public void itemStateChanged(ItemEvent e) {
                SetupCheckBox box = (SetupCheckBox) e.getSource();
                if (projectType.equals(ProjectType.ANDROID)) {
                    sdkLocationText.setEnabled(box.isSelected());
                }
                if (box.isSelected()) {
                    modules.add(projectType);
                } else {
                    if (modules.contains(projectType)) {
                        modules.remove(projectType);
                    }
                }
            }
        });
    }
    add(projectsLabel, new GridBagConstraints(0, 6, 1, 1, 0, 0, WEST, WEST, new Insets(20, 0, 0, 0), 0, 0));
    add(subProjectsPanel, new GridBagConstraints(0, 7, 3, 1, 0, 0, CENTER, HORIZONTAL, new Insets(0, 0, 0, 0), 0, 0));
    int depCounter = 0;
    for (int row = 0; row <= (ProjectDependency.values().length / 5); row++) {
        JPanel extensionPanel = new JPanel(new GridLayout(1, 5));
        while (depCounter < ProjectDependency.values().length) {
            if (ProjectDependency.values()[depCounter] != null) {
                final ProjectDependency projDep = ProjectDependency.values()[depCounter];
                if (projDep.equals(ProjectDependency.GDX)) {
                    depCounter++;
                    continue;
                }
                SetupCheckBox depCheckBox = new SetupCheckBox(projDep.name().substring(0, 1) + projDep.name().substring(1, projDep.name().length()).toLowerCase());
                depCheckBox.setToolTipText(projDep.getDescription());
                if (projDep.equals(ProjectDependency.BOX2D)) {
                    depCheckBox.setSelected(true);
                }
                extensionPanel.add(depCheckBox);
                depCheckBox.addItemListener(new ItemListener() {

                    @Override
                    public void itemStateChanged(ItemEvent e) {
                        SetupCheckBox box = (SetupCheckBox) e.getSource();
                        if (box.isSelected()) {
                            dependencies.add(builder.bank.getDependency(projDep));
                        } else {
                            if (dependencies.contains(builder.bank.getDependency(projDep))) {
                                dependencies.remove(builder.bank.getDependency(projDep));
                            }
                        }
                    }
                });
                if (depCounter % 5 == 0) {
                    depCounter++;
                    break;
                }
                depCounter++;
            }
        }
        for (int left = ((depCounter - 1) % 5); left > 1; left--) {
            extensionPanel.add(Box.createHorizontalBox());
        }
        extensionsPanels.add(extensionPanel);
    }
    add(extensionsLabel, new GridBagConstraints(0, 8, 1, 1, 0, 0, WEST, WEST, new Insets(10, 0, 0, 0), 0, 0));
    int rowCounter = 9;
    for (JPanel extensionsPanel : extensionsPanels) {
        add(extensionsPanel, new GridBagConstraints(0, rowCounter, 3, 1, 0, 0, CENTER, HORIZONTAL, new Insets(5, 0, 0, 0), 0, 0));
        rowCounter++;
    }
    add(showMoreExtensionsButton, new GridBagConstraints(0, 12, 0, 1, 0, 0, CENTER, WEST, new Insets(10, 0, 10, 0), 0, 0));
}
