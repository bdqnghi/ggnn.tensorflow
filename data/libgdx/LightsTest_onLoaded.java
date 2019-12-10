@Override
protected void onLoaded() {
    super.onLoaded();
    BoundingBox bounds = instances.get(0).calculateBoundingBox(new BoundingBox());
    bounds.getCenter(center);
    radius = bounds.getDimensions(tmpV).len() * .5f;
    pointLight.position.set(0, radius, 0).add(transformedCenter.set(center).mul(transform));
    pointLight.intensity = radius * radius;
    ((ColorAttribute) pLight.material.get(ColorAttribute.Diffuse)).color.set(pointLight.color);
    final float s = 0.2f * radius;
    pLight.worldTransform.setToScaling(s, s, s);
}
