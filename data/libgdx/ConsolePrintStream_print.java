public void print(char c) {
    if (c == '\n') {
        println("");
    } else {
        buf.append(c);
    }
}
