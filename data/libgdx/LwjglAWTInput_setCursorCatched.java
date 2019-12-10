@Override
public void setCursorCatched(boolean catched) {
    this.catched = catched;
    showCursor(!catched);
}
