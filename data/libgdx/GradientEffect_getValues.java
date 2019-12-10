public List getValues() {
    List values = new ArrayList();
    values.add(EffectUtil.colorValue("Top color", topColor));
    values.add(EffectUtil.colorValue("Bottom color", bottomColor));
    values.add(EffectUtil.intValue("Offset", offset, "This setting allows you to move the gradient up or down. The gradient is normally centered on the glyph."));
    values.add(EffectUtil.floatValue("Scale", scale, 0, 10, "This setting allows you to change the height of the gradient by a" + "percentage. The gradient is normally the height of most glyphs in the font."));
    values.add(EffectUtil.booleanValue("Cyclic", cyclic, "If this setting is checked, the gradient will repeat."));
    return values;
}
