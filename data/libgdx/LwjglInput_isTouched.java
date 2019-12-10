public boolean isTouched(int pointer) {
    if (pointer > 0)
        return false;
    else
        return isTouched();
}
