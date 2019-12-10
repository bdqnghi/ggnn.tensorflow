protected void save() {
    FileDialog dialog = new FileDialog(this, "Save Image", FileDialog.SAVE);
    if (lastDir != null)
        dialog.setDirectory(lastDir);
    dialog.setVisible(true);
    final String file = dialog.getFile();
    final String dir = dialog.getDirectory();
    if (dir == null || file == null || file.trim().length() == 0)
        return;
    lastDir = dir;
    try {
        generatePremultiplyAlpha(new File(dir, file));
        JOptionPane.showMessageDialog(this, "Conversion complete!");
    } catch (Exception ex) {
        JOptionPane.showMessageDialog(this, "Error saving image.");
        return;
    }
}
