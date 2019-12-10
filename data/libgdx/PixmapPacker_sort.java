public void sort(Array<Pixmap> images) {
    if (comparator == null) {
        comparator = new Comparator<Pixmap>() {

            public int compare(Pixmap o1, Pixmap o2) {
                return o1.getHeight() - o2.getHeight();
            }
        };
    }
    images.sort(comparator);
}
