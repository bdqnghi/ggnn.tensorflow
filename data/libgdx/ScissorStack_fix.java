private static void fix(Rectangle rect) {
    rect.x = Math.round(rect.x);
    rect.y = Math.round(rect.y);
    rect.width = Math.round(rect.width);
    rect.height = Math.round(rect.height);
    if (rect.width < 0) {
        rect.width = -rect.width;
        rect.x -= rect.width;
    }
    if (rect.height < 0) {
        rect.height = -rect.height;
        rect.y -= rect.height;
    }
}
