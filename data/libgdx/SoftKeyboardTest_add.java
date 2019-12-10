public void add(char c) {
    cursor++;
    if (cursor == -1)
        chars.add(c);
    else
        chars.insert(cursor, c);
}
