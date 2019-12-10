public int getY(int pointer) {
    return pointer > 0 ? 0 : getY();
}
