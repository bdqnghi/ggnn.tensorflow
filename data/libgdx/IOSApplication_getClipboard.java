@Override
public Clipboard getClipboard() {
    return new Clipboard() {

        @Override
        public void setContents(String content) {
            UIPasteboard.getGeneralPasteboard().setString(content);
        }

        @Override
        public String getContents() {
            return UIPasteboard.getGeneralPasteboard().getString();
        }
    };
}
