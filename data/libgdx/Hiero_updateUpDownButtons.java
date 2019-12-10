public void updateUpDownButtons() {
    for (int index = 0; index < effectPanels.size(); index++) {
        EffectPanel effectPanel = effectPanels.get(index);
        if (index == 0) {
            effectPanel.upButton.setEnabled(false);
        } else {
            effectPanel.upButton.setEnabled(true);
        }
        if (index == effectPanels.size() - 1) {
            effectPanel.downButton.setEnabled(false);
        } else {
            effectPanel.downButton.setEnabled(true);
        }
    }
}
