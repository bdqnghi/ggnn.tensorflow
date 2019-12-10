@Override
public void setSelection(int selectionStart, int selectionEnd) {
    super.setSelection(selectionStart, selectionEnd);
    updateCurrentLine();
}
