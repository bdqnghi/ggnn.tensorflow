private void createDefaultTextField() {
    textfield = new UITextField(new CGRect(10, 10, 100, 50));
    // Parameters
    // Setting parameters
    textfield.setKeyboardType(UIKeyboardType.Default);
    textfield.setReturnKeyType(UIReturnKeyType.Done);
    textfield.setAutocapitalizationType(UITextAutocapitalizationType.None);
    textfield.setAutocorrectionType(UITextAutocorrectionType.No);
    textfield.setSpellCheckingType(UITextSpellCheckingType.No);
    textfield.setHidden(true);
    // Text field needs to have at least one symbol - so we can use backspace
    textfield.setText("x");
    app.getUIViewController().getView().addSubview(textfield);
}
