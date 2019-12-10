public void act(float delta) {
    super.act(delta);
    Actor[] actors = children.begin();
    for (int i = 0, n = children.size; i < n; i++) actors[i].act(delta);
    children.end();
}
