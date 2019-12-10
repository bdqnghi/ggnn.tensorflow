public void setDisabled(boolean disabled) {
    if (disabled && !this.disabled)
        hideList();
    this.disabled = disabled;
}
