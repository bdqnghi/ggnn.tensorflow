protected Model createCapsuleModel(float radius, float height) {
    final Model result = modelBuilder.createCapsule(radius, height + radius * 2f, 16, new Material(ColorAttribute.createDiffuse(Color.WHITE), ColorAttribute.createSpecular(Color.WHITE)), Usage.Position | Usage.Normal);
    disposables.add(result);
    return result;
}
