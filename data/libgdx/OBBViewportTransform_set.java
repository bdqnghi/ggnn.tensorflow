public void set(OBBViewportTransform vpt) {
    box.center.set(vpt.box.center);
    box.extents.set(vpt.box.extents);
    box.R.set(vpt.box.R);
    yFlip = vpt.yFlip;
}
