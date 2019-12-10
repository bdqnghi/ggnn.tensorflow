@Override
public void render() {
    super.render();
    if (internalTickCallback == null)
        return;
    if ((toggleTime += Gdx.graphics.getDeltaTime()) > 1.0f) {
        toggleTime -= 1.0f;
        if (toggleAttach)
            internalTickCallback.detach();
        else
            internalTickCallback.attach();
        toggleAttach = !toggleAttach;
    }
}
