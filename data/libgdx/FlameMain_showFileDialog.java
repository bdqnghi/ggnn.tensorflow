private File showFileDialog(String title, int mode) {
    FileDialog dialog = new FileDialog(this, title, mode);
    if (lastDir != null)
        dialog.setDirectory(lastDir);
    dialog.setVisible(true);
    final String file = dialog.getFile();
    final String dir = dialog.getDirectory();
    if (dir == null || file == null || file.trim().length() == 0)
        return null;
    lastDir = dir;
    return new File(dir, file);
}
