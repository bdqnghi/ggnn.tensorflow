private boolean splitFreeNode(Rect freeNode, Rect usedNode) {
    // Test with SAT if the rectangles even intersect.
    if (usedNode.x >= freeNode.x + freeNode.width || usedNode.x + usedNode.width <= freeNode.x || usedNode.y >= freeNode.y + freeNode.height || usedNode.y + usedNode.height <= freeNode.y)
        return false;
    if (usedNode.x < freeNode.x + freeNode.width && usedNode.x + usedNode.width > freeNode.x) {
        // New node at the top side of the used node.
        if (usedNode.y > freeNode.y && usedNode.y < freeNode.y + freeNode.height) {
            Rect newNode = new Rect(freeNode);
            newNode.height = usedNode.y - newNode.y;
            freeRectangles.add(newNode);
        }
        // New node at the bottom side of the used node.
        if (usedNode.y + usedNode.height < freeNode.y + freeNode.height) {
            Rect newNode = new Rect(freeNode);
            newNode.y = usedNode.y + usedNode.height;
            newNode.height = freeNode.y + freeNode.height - (usedNode.y + usedNode.height);
            freeRectangles.add(newNode);
        }
    }
    if (usedNode.y < freeNode.y + freeNode.height && usedNode.y + usedNode.height > freeNode.y) {
        // New node at the left side of the used node.
        if (usedNode.x > freeNode.x && usedNode.x < freeNode.x + freeNode.width) {
            Rect newNode = new Rect(freeNode);
            newNode.width = usedNode.x - newNode.x;
            freeRectangles.add(newNode);
        }
        // New node at the right side of the used node.
        if (usedNode.x + usedNode.width < freeNode.x + freeNode.width) {
            Rect newNode = new Rect(freeNode);
            newNode.x = usedNode.x + usedNode.width;
            newNode.width = freeNode.x + freeNode.width - (usedNode.x + usedNode.width);
            freeRectangles.add(newNode);
        }
    }
    return true;
}
