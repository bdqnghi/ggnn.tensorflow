/**
 * Returns the index of the page containing the given packed rectangle.
 * @param name the name of the image
 * @return the index of the page the image is stored in or -1
 */
public synchronized int getPageIndex(String name) {
    for (int i = 0; i < pages.size; i++) {
        Rectangle rect = pages.get(i).rects.get(name);
        if (rect != null)
            return i;
    }
    return -1;
}
