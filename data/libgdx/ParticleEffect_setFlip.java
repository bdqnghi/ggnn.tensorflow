public void setFlip(boolean flipX, boolean flipY) {
    for (int i = 0, n = emitters.size; i < n; i++) emitters.get(i).setFlip(flipX, flipY);
}
