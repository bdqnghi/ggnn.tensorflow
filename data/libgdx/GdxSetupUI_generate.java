void generate() {
    final String name = ui.form.nameText.getText().trim();
    if (name.length() == 0) {
        JOptionPane.showMessageDialog(this, "Please enter a project name.");
        return;
    }
    final String pack = ui.form.packageText.getText().trim();
    if (pack.length() == 0) {
        JOptionPane.showMessageDialog(this, "Please enter a package name.");
        return;
    }
    Pattern pattern = Pattern.compile("[a-z][a-z0-9_]*(\\.[a-z0-9_]+)+[0-9a-z_]");
    Matcher matcher = pattern.matcher(pack);
    boolean matches = matcher.matches();
    if (!matches) {
        JOptionPane.showMessageDialog(this, "Invalid package name");
        return;
    }
    final String clazz = ui.form.gameClassText.getText().trim();
    if (clazz.length() == 0) {
        JOptionPane.showMessageDialog(this, "Please enter a game class name.");
        return;
    }
    final String destination = ui.form.destinationText.getText().trim();
    if (destination.length() == 0) {
        JOptionPane.showMessageDialog(this, "Please enter a destination directory.");
        return;
    }
    final String sdkLocation = ui.form.sdkLocationText.getText().trim();
    if (sdkLocation.length() == 0 && modules.contains(ProjectType.ANDROID)) {
        JOptionPane.showMessageDialog(this, "Please enter your Android SDK's path");
        return;
    }
    if (!GdxSetup.isSdkLocationValid(sdkLocation) && modules.contains(ProjectType.ANDROID)) {
        JOptionPane.showMessageDialog(this, "Your Android SDK path doesn't contain an SDK! Please install the Android SDK, including all platforms and build tools!");
        return;
    }
    if (modules.contains(ProjectType.ANDROID)) {
        if (!GdxSetup.isSdkUpToDate(sdkLocation)) {
            try {
                // give them a poke in the right direction
                if (System.getProperty("os.name").contains("Windows")) {
                    String replaced = sdkLocation.replace("\\", "\\\\");
                    Runtime.getRuntime().exec("\"" + replaced + "\\SDK Manager.exe\"");
                } else {
                    Runtime.getRuntime().exec("\"" + sdkLocation + "tools/android sdk\"");
                }
            } catch (IOException e) {
                e.printStackTrace();
            }
            return;
        }
    }
    if (!GdxSetup.isEmptyDirectory(destination)) {
        int value = JOptionPane.showConfirmDialog(this, "The destination is not empty, do you want to overwrite?", "Warning!", JOptionPane.YES_NO_OPTION);
        if (value != 0) {
            return;
        }
    }
    List<String> incompatList = builder.buildProject(modules, dependencies);
    if (incompatList.size() == 0) {
        try {
            builder.build();
        } catch (IOException e) {
            e.printStackTrace();
        }
    } else {
        JPanel panel = new JPanel();
        panel.setLayout(new BoxLayout(panel, BoxLayout.Y_AXIS));
        for (String subIncompat : incompatList) {
            JLabel label = new JLabel(subIncompat);
            label.setAlignmentX(Component.CENTER_ALIGNMENT);
            panel.add(label);
        }
        JLabel infoLabel = new JLabel("<html><br><br>The project can be generated, but you wont be able to use these extensions in the respective sub modules<br>Please see the link to learn about extensions</html>");
        infoLabel.setAlignmentX(Component.CENTER_ALIGNMENT);
        panel.add(infoLabel);
        JEditorPane pane = new JEditorPane("text/html", "<a href=\"https://github.com/libgdx/libgdx/wiki/Dependency-management-with-Gradle\">Dependency Management</a>");
        pane.addHyperlinkListener(new HyperlinkListener() {

            @Override
            public void hyperlinkUpdate(HyperlinkEvent e) {
                if (e.getEventType().equals(HyperlinkEvent.EventType.ACTIVATED))
                    try {
                        Desktop.getDesktop().browse(new URI(e.getURL().toString()));
                    } catch (IOException e1) {
                        e1.printStackTrace();
                    } catch (URISyntaxException e1) {
                        e1.printStackTrace();
                    }
            }
        });
        pane.setEditable(false);
        pane.setOpaque(false);
        pane.setAlignmentX(Component.CENTER_ALIGNMENT);
        panel.add(pane);
        Object[] options = { "Yes, build it!", "No, I'll change my extensions" };
        int value = JOptionPane.showOptionDialog(null, panel, "Extension Incompatibilities", JOptionPane.YES_NO_OPTION, JOptionPane.QUESTION_MESSAGE, null, options, null);
        if (value != 0) {
            return;
        } else {
            try {
                builder.build();
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
    }
    ui.generateButton.setEnabled(false);
    new Thread() {

        public void run() {
            log("Generating app in " + destination);
            new GdxSetup().build(builder, destination, name, pack, clazz, sdkLocation, new CharCallback() {

                @Override
                public void character(char c) {
                    log(c);
                }
            }, ui.settings.getGradleArgs());
            log("Done!");
            if (ui.settings.getGradleArgs().contains("eclipse") || ui.settings.getGradleArgs().contains("idea")) {
                log("To import in Eclipse: File -> Import -> General -> Existing Projects into Workspace");
                log("To import to Intellij IDEA: File -> Open -> YourProject.ipr");
            } else {
                log("To import in Eclipse: File -> Import -> Gradle -> Gradle Project");
                log("To import to Intellij IDEA: File -> Open -> build.gradle");
                log("To import to NetBeans: File -> Open Project...");
            }
            SwingUtilities.invokeLater(new Runnable() {

                @Override
                public void run() {
                    ui.generateButton.setEnabled(true);
                }
            });
        }
    }.start();
}
