/**
 * @param name the name of the image
 * @return the rectangle for the image in the page it's stored in or null
 */
public synchronized Rectangle getRect(String name) {
    for (Page page : pages) {
        Rectangle rect = page.rects.get(name);
        if (rect != null)
            return rect;
    }
    return null;
}
