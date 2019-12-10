public void setHasAdvanced(boolean hasAdvanced) {
    super.setHasAdvanced(hasAdvanced);
    advancedButton.setVisible(hasAdvanced && (value.isActive() || isAlwaysActive));
}
