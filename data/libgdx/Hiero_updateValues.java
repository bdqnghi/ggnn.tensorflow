public void updateValues() {
    prefs.put("foreground", EffectUtil.toString(colorEffect.getColor()));
    valuesPanel.removeAll();
    values = effect.getValues();
    for (Iterator iter = values.iterator(); iter.hasNext(); ) addValue((Value) iter.next());
}
