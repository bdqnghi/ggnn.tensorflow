private void init() {
    // create the isometric transform
    isoTransform = new Matrix4();
    isoTransform.idt();
    // isoTransform.translate(0, 32, 0);
    isoTransform.scale((float) (Math.sqrt(2.0) / 2.0), (float) (Math.sqrt(2.0) / 4.0), 1.0f);
    isoTransform.rotate(0.0f, 0.0f, 1.0f, -45);
    // ... and the inverse matrix
    invIsotransform = new Matrix4(isoTransform);
    invIsotransform.inv();
}
