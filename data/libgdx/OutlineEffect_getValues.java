public List getValues() {
    List values = new ArrayList();
    values.add(EffectUtil.colorValue("Color", color));
    values.add(EffectUtil.floatValue("Width", width, 0.1f, 999, "This setting controls the width of the outline. " + "The glyphs will need padding so the outline doesn't get clipped."));
    values.add(EffectUtil.optionValue("Join", String.valueOf(join), new String[][] { { "Bevel", BasicStroke.JOIN_BEVEL + "" }, { "Miter", BasicStroke.JOIN_MITER + "" }, { "Round", BasicStroke.JOIN_ROUND + "" } }, "This setting defines how the corners of the outline are drawn. " + "This is usually only noticeable at large outline widths."));
    return values;
}
