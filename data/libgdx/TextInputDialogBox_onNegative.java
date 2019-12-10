protected void onNegative() {
    if (listener != null) {
        listener.onNegative();
    }
    this.hide();
}
