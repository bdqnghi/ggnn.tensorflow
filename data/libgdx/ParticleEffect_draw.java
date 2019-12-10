public void draw(Batch spriteBatch, float delta) {
    for (int i = 0, n = emitters.size; i < n; i++) emitters.get(i).draw(spriteBatch, delta);
}
