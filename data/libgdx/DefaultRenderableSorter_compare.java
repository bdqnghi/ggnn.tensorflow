@Override
public int compare(final Renderable o1, final Renderable o2) {
    final boolean b1 = o1.material.has(BlendingAttribute.Type) && ((BlendingAttribute) o1.material.get(BlendingAttribute.Type)).blended;
    final boolean b2 = o2.material.has(BlendingAttribute.Type) && ((BlendingAttribute) o2.material.get(BlendingAttribute.Type)).blended;
    if (b1 != b2)
        return b1 ? 1 : -1;
    // FIXME implement better sorting algorithm
    // final boolean same = o1.shader == o2.shader && o1.mesh == o2.mesh && (o1.lights == null) == (o2.lights == null) &&
    // o1.material.equals(o2.material);
    o1.worldTransform.getTranslation(tmpV1);
    o2.worldTransform.getTranslation(tmpV2);
    final float dst = (int) (1000f * camera.position.dst2(tmpV1)) - (int) (1000f * camera.position.dst2(tmpV2));
    final int result = dst < 0 ? -1 : (dst > 0 ? 1 : 0);
    return b1 ? -result : result;
}
