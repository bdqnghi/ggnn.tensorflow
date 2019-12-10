@Override
public String getContents() {
    String result = "";
    java.awt.datatransfer.Clipboard clipboard = Toolkit.getDefaultToolkit().getSystemClipboard();
    Transferable contents = clipboard.getContents(null);
    boolean hasTransferableText = (contents != null) && contents.isDataFlavorSupported(DataFlavor.stringFlavor);
    if (hasTransferableText) {
        try {
            result = (String) contents.getTransferData(DataFlavor.stringFlavor);
        } catch (UnsupportedFlavorException ex) {
        // doh...
        } catch (IOException ex) {
        // doh...
        }
    }
    return result;
}
