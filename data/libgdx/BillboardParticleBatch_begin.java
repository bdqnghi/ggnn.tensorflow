@Override
public void begin() {
    super.begin();
    renderablePool.freeAll(renderables);
    renderables.clear();
}
