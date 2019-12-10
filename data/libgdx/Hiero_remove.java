public void remove() {
    effectPanels.remove(this);
    appliedEffectsPanel.remove(EffectPanel.this);
    getContentPane().validate();
    effectsList.getListSelectionListeners()[0].valueChanged(null);
}
