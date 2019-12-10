protected void open() {
    FileDialog dialog = new FileDialog(this, "Open Image", FileDialog.LOAD);
    if (lastDir != null)
        dialog.setDirectory(lastDir);
    dialog.setVisible(true);
    final String file = dialog.getFile();
    final String dir = dialog.getDirectory();
    if (dir == null || file == null || file.trim().length() == 0)
        return;
    lastDir = dir;
    try {
        image = ImageIO.read(new File(dir, file));
        imagePanel.setImage(image);
        imagePanel.revalidate();
        imagePanel.repaint();
        pack();
    } catch (Exception ex) {
        JOptionPane.showMessageDialog(this, "Error opening image.");
        return;
    }
}
