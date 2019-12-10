@Override
public void create() {
    super.create();
    environment.clear();
    environment.set(new ColorAttribute(ColorAttribute.AmbientLight, 0.2f, 0.2f, 0.2f, 1.0f));
    environment.add(dirLight = new DirectionalLight().set(0.8f, 0.2f, 0.2f, -1f, -2f, -0.5f));
    environment.add(pointLight = new PointLight().set(0.2f, 0.8f, 0.2f, 0f, 0f, 0f, 100f));
    ModelBuilder mb = new ModelBuilder();
    lightModel = mb.createSphere(1, 1, 1, 10, 10, new Material(ColorAttribute.createDiffuse(1, 1, 1, 1)), Usage.Position);
    lightModel.nodes.get(0).parts.get(0).setRenderable(pLight = new Renderable());
}
