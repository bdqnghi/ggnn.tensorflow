public void scroll(long window, double scrollX, double scrollY) {
    processor.scrolled((int) -Math.signum(scrollY));
}
