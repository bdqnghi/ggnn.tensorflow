@Override
public void setContents(String content) {
    StringSelection stringSelection = new StringSelection(content);
    java.awt.datatransfer.Clipboard clipboard = Toolkit.getDefaultToolkit().getSystemClipboard();
    clipboard.setContents(stringSelection, this);
}
