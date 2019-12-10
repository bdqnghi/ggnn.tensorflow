public String getContents() {
    java.awt.datatransfer.Clipboard clipboard = Toolkit.getDefaultToolkit().getSystemClipboard();
    Transferable contents = clipboard.getContents(null);
    if (contents != null && contents.isDataFlavorSupported(DataFlavor.stringFlavor)) {
        try {
            return (String) contents.getTransferData(DataFlavor.stringFlavor);
        } catch (Exception ignored) {
        }
    }
    return "";
}
