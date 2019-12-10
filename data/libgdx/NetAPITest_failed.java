@Override
public void failed(Throwable t) {
    setButtonDisabled(false);
    statusLabel.setText("Failed to perform the HTTP Request: " + t.getMessage());
    t.printStackTrace();
}
