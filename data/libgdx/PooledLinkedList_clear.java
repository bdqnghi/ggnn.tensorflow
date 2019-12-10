public void clear() {
    iter();
    T v = null;
    while ((v = next()) != null) remove();
}
