public boolean handle(T event) {
    current++;
    return current >= count;
}
