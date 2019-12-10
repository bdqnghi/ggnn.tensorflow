public List getValues() {
    List values = super.getValues();
    // Remove "Join".
    values.remove(2);
    values.add(EffectUtil.floatValue("Detail", detail, 1, 50, "This setting controls how detailed the outline will be. " + "Smaller numbers cause the outline to have more detail."));
    values.add(EffectUtil.floatValue("Amplitude", amplitude, 0.5f, 50, "This setting controls the amplitude of the outline."));
    return values;
}
