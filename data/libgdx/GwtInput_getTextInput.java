public void getTextInput(TextInputListener listener, String title, String text, String hint) {
    TextInputDialogBox dialog = new TextInputDialogBox(title, text, hint);
    final TextInputListener capturedListener = listener;
    dialog.setListener(new TextInputDialogListener() {

        @Override
        public void onPositive(String text) {
            if (capturedListener != null) {
                capturedListener.input(text);
            }
        }

        @Override
        public void onNegative() {
            if (capturedListener != null) {
                capturedListener.canceled();
            }
        }
    });
}
