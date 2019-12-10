@Override
public void setOnscreenKeyboardVisible(boolean visible) {
    if (textfield == null)
        createDefaultTextField();
    if (visible) {
        textfield.becomeFirstResponder();
        textfield.setDelegate(textDelegate);
    } else {
        textfield.resignFirstResponder();
    }
}
