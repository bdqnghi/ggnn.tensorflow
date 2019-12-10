public void setHasAdvanced(boolean hasAdvanced) {
    this.hasAdvanced = hasAdvanced;
    advancedButton.setVisible(hasAdvanced && (value.isActive() || value.isAlwaysActive()));
}
