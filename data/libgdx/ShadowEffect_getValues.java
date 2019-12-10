public List getValues() {
    List values = new ArrayList();
    values.add(EffectUtil.colorValue("Color", color));
    values.add(EffectUtil.floatValue("Opacity", opacity, 0, 1, "This setting sets the translucency of the shadow."));
    values.add(EffectUtil.floatValue("X distance", xDistance, -99, 99, "This setting is the amount of pixels to offset the " + "shadow on the x axis. The glyphs will need padding so the shadow doesn't get clipped."));
    values.add(EffectUtil.floatValue("Y distance", yDistance, -99, 99, "This setting is the amount of pixels to offset the " + "shadow on the y axis. The glyphs will need padding so the shadow doesn't get clipped."));
    List options = new ArrayList();
    options.add(new String[] { "None", "0" });
    for (int i = 2; i < NUM_KERNELS; i++) options.add(new String[] { String.valueOf(i) });
    String[][] optionsArray = (String[][]) options.toArray(new String[options.size()][]);
    values.add(EffectUtil.optionValue("Blur kernel size", String.valueOf(blurKernelSize), optionsArray, "This setting controls how many neighboring pixels are used to blur the shadow. Set to \"None\" for no blur."));
    values.add(EffectUtil.intValue("Blur passes", blurPasses, "The setting is the number of times to apply a blur to the shadow. Set to \"0\" for no blur."));
    return values;
}
