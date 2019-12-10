public List getValues() {
    List values = super.getValues();
    values.add(EffectUtil.floatValue("Wavelength", wavelength, 1, 100, "This setting controls the wavelength of the outline. " + "The smaller the value, the more segments will be used to draw the outline."));
    values.add(EffectUtil.floatValue("Amplitude", amplitude, 0.5f, 50, "This setting controls the amplitude of the outline. " + "The bigger the value, the more the zigzags will vary."));
    return values;
}
