public UITextField getKeyboardTextField() {
    if (textfield == null)
        createDefaultTextField();
    return textfield;
}
