void setButtonDisabled(boolean disabled) {
    Touchable t = disabled ? Touchable.disabled : Touchable.enabled;
    btnDownloadImage.setDisabled(disabled);
    btnDownloadImage.setTouchable(t);
    btnDownloadText.setDisabled(disabled);
    btnDownloadText.setTouchable(t);
    btnDownloadError.setDisabled(disabled);
    btnDownloadError.setTouchable(t);
    btnPost.setDisabled(disabled);
    btnPost.setTouchable(t);
}
