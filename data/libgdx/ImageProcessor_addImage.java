/**
 * The image will be kept in-memory during packing.
 * @see #addImage(File)
 */
public Rect addImage(BufferedImage image, String name) {
    Rect rect = processImage(image, name);
    if (rect == null) {
        if (!settings.silent)
            System.out.println("Ignoring blank input image: " + name);
        return null;
    }
    if (settings.alias) {
        String crc = hash(rect.getImage(this));
        Rect existing = crcs.get(crc);
        if (existing != null) {
            if (!settings.silent)
                System.out.println(rect.name + " (alias of " + existing.name + ")");
            existing.aliases.add(new Alias(rect));
            return null;
        }
        crcs.put(crc, rect);
    }
    rects.add(rect);
    return rect;
}
