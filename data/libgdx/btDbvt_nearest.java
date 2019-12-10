public static int nearest(java.nio.IntBuffer i, btDbvt.sStkNPS a, float v, int l, int h) {
    assert i.isDirect() : "Buffer must be allocated direct.";
    {
        return CollisionJNI.btDbvt_nearest(i, btDbvt.sStkNPS.getCPtr(a), a, v, l, h);
    }
}
