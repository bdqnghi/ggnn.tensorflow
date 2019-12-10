public ModelMaterial getMaterial(final String name) {
    for (final ModelMaterial m : materials) if (m.id.equals(name))
        return m;
    ModelMaterial mat = new ModelMaterial();
    mat.id = name;
    mat.diffuse = new Color(Color.WHITE);
    materials.add(mat);
    return mat;
}
