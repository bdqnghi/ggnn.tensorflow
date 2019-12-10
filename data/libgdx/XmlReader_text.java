protected void text(String text) {
    String existing = current.getText();
    current.setText(existing != null ? existing + text : text);
}
