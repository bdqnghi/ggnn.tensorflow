/**
 * Builds an {@link UIAlertView} with an added {@link UITextField} for inputting text.
 * @param listener Text input listener
 * @param title Dialog title
 * @param text Text for text field
 * @return UiAlertView
 */
private UIAlertView buildUIAlertView(final TextInputListener listener, String title, String text, String placeholder) {
    delegate = new UIAlertViewDelegateAdapter() {

        @Override
        public void clicked(UIAlertView view, long clicked) {
            if (clicked == 0) {
                // user clicked "Cancel" button
                listener.canceled();
            } else if (clicked == 1) {
                // user clicked "Ok" button
                UITextField textField = view.getTextField(0);
                listener.input(textField.getText());
            }
            delegate = null;
        }

        @Override
        public void cancel(UIAlertView view) {
            listener.canceled();
            delegate = null;
        }
    };
    // build the view
    final UIAlertView uiAlertView = new UIAlertView();
    uiAlertView.setTitle(title);
    uiAlertView.addButton("Cancel");
    uiAlertView.addButton("Ok");
    uiAlertView.setAlertViewStyle(UIAlertViewStyle.PlainTextInput);
    uiAlertView.setDelegate(delegate);
    UITextField textField = uiAlertView.getTextField(0);
    textField.setPlaceholder(placeholder);
    textField.setText(text);
    return uiAlertView;
}
