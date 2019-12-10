protected void onPositive() {
    if (listener != null) {
        listener.onPositive(textBox.getText());
    }
    this.hide();
}
