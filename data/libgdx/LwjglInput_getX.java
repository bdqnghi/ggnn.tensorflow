public int getX(int pointer) {
    if (pointer > 0)
        return 0;
    else
        return getX();
}
