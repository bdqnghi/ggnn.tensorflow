public boolean isTouched(int pointer) {
    return pointer > 0 ? false : isTouched();
}
