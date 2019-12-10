public void moveEffect(int newIndex) {
    appliedEffectsPanel.remove(this);
    effectPanels.remove(this);
    appliedEffectsPanel.add(this, constrains, newIndex);
    effectPanels.add(newIndex, this);
}
