public static boolean overlaps(Circle c, Rectangle r) {
    float closestX = c.x;
    float closestY = c.y;
    if (c.x < r.x) {
        closestX = r.x;
    } else if (c.x > r.x + r.width) {
        closestX = r.x + r.width;
    }
    if (c.y < r.y) {
        closestY = r.y;
    } else if (c.y > r.y + r.height) {
        closestY = r.y + r.height;
    }
    closestX = closestX - c.x;
    closestX *= closestX;
    closestY = closestY - c.y;
    closestY *= closestY;
    return closestX + closestY < c.radius * c.radius;
}
