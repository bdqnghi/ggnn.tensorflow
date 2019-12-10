File getDirectory() {
    if (System.getProperty("os.name").contains("Mac")) {
        System.setProperty("apple.awt.fileDialogForDirectories", "true");
        FileDialog dialog = new FileDialog(GdxSetupUI.this, "Choose destination", FileDialog.LOAD);
        dialog.setVisible(true);
        String name = dialog.getFile();
        String dir = dialog.getDirectory();
        if (name == null || dir == null)
            return null;
        return new File(dialog.getDirectory(), dialog.getFile());
    } else {
        JFileChooser chooser = new JFileChooser();
        chooser.setFileSelectionMode(JFileChooser.DIRECTORIES_ONLY);
        chooser.setDialogTitle("Choose destination");
        int result = chooser.showOpenDialog(null);
        if (result == JFileChooser.APPROVE_OPTION) {
            File dir = chooser.getSelectedFile();
            if (dir == null)
                return null;
            if (dir.getAbsolutePath().trim().length() == 0)
                return null;
            return dir;
        } else {
            return null;
        }
    }
}
