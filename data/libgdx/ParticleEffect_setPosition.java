public void setPosition(float x, float y) {
    for (int i = 0, n = emitters.size; i < n; i++) emitters.get(i).setPosition(x, y);
}
