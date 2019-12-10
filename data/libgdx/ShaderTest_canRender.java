@Override
public boolean canRender(Renderable instance) {
    return instance.material.has(TestAttribute.ID) && (instance.material.has(ColorAttribute.Diffuse) == withColor);
}
