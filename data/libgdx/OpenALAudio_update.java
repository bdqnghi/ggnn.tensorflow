public void update() {
    if (noDevice)
        return;
    for (int i = 0; i < music.size; i++) music.items[i].update();
}
