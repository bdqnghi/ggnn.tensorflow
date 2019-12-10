@Override
public void getTextInput(TextInputListener listener, String title, String text, String hint) {
    buildUIAlertView(listener, title, text, hint).show();
}
