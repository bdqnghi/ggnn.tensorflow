@Override
public List getValues() {
    List values = new ArrayList();
    values.add(EffectUtil.colorValue("Color", color));
    values.add(EffectUtil.intValue("Scale", scale, "The distance field is computed from an image larger than the output glyph by this factor. Set this to a higher value for more accuracy, but slower font generation."));
    values.add(EffectUtil.floatValue("Spread", spread, 1.0f, Float.MAX_VALUE, "The maximum distance from edges where the effect of the distance field is seen. Set this to about half the width of lines in your output font."));
    return values;
}
