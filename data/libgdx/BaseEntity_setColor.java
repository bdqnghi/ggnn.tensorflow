public void setColor(float r, float g, float b, float a) {
    color.set(r, g, b, a);
    if (modelInstance != null) {
        for (Material m : modelInstance.materials) {
            ColorAttribute ca = (ColorAttribute) m.get(ColorAttribute.Diffuse);
            if (ca != null)
                ca.color.set(r, g, b, a);
        }
    }
}
