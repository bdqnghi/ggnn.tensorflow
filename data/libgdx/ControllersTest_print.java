void print(String message) {
    String[] lines = console.getItems().toArray(String.class);
    String[] newLines = new String[lines.length + 1];
    System.arraycopy(lines, 0, newLines, 0, lines.length);
    newLines[newLines.length - 1] = message;
    console.setItems(newLines);
    scrollPane.invalidate();
    scrollPane.validate();
    scrollPane.setScrollPercentY(1.0f);
}
