@Override
public int compare(Renderable arg0, Renderable arg1) {
    final VertexAttributes va0 = arg0.meshPart.mesh.getVertexAttributes();
    final VertexAttributes va1 = arg1.meshPart.mesh.getVertexAttributes();
    final int vc = va0.compareTo(va1);
    if (vc == 0) {
        final int mc = arg0.material.compareTo(arg1.material);
        if (mc == 0) {
            return arg0.meshPart.primitiveType - arg1.meshPart.primitiveType;
        }
        return mc;
    }
    return vc;
}
