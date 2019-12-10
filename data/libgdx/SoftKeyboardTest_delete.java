public void delete() {
    if (chars.size == 0)
        return;
    chars.removeIndex(cursor - 1);
    cursor--;
}
