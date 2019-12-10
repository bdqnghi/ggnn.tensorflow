/**
 * @param name the name of the image
 * @return the page the image is stored in or null
 */
public synchronized Page getPage(String name) {
    for (Page page : pages) {
        Rectangle rect = page.rects.get(name);
        if (rect != null)
            return page;
    }
    return null;
}
