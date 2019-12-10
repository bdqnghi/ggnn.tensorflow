@Override
public void create() {
    super.create();
    environment = new Environment();
    environment.set(new ColorAttribute(ColorAttribute.AmbientLight, 0.4f, 0.4f, 0.4f, 1.f));
    environment.add(new DirectionalLight().set(0.8f, 0.8f, 0.8f, -0.5f, -1.0f, -0.8f));
    cam.position.set(1, 1, 1);
    cam.lookAt(0, 0, 0);
    cam.update();
    showAxes = true;
    onModelClicked("g3d/teapot.g3db");
}
