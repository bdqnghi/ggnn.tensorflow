@Override
public Renderable obtain() {
    Renderable renderable = super.obtain();
    renderable.environment = null;
    renderable.material = null;
    renderable.meshPart.set("", null, 0, 0, 0);
    renderable.shader = null;
    obtained.add(renderable);
    return renderable;
}
