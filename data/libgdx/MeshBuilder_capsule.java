@Override
public void capsule(float radius, float height, int divisions) {
    if (height < 2f * radius)
        throw new GdxRuntimeException("Height must be at least twice the radius");
    final float d = 2f * radius;
    cylinder(d, height - d, d, divisions, 0, 360, false);
    sphere(matTmp1.setToTranslation(0, .5f * (height - d), 0), d, d, d, divisions, divisions, 0, 360, 0, 90);
    sphere(matTmp1.setToTranslation(0, -.5f * (height - d), 0), d, d, d, divisions, divisions, 0, 360, 90, 180);
}
