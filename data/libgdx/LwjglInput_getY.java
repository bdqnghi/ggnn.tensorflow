public int getY(int pointer) {
    if (pointer > 0)
        return 0;
    else
        return getY();
}
