@Override
public void sort(final Camera camera, final Array<Renderable> renderables) {
    this.camera = camera;
    renderables.sort(this);
}
