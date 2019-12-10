void updateFontSelector() {
    final boolean useFile = fontFileRadio.isSelected();
    fontList.setEnabled(!useFile);
    fontFileText.setEnabled(useFile);
    browseButton.setEnabled(useFile);
}
