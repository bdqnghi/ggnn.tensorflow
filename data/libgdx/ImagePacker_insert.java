private Node insert(Node node, Rectangle rect) {
    if (node.leaveName == null && node.leftChild != null && node.rightChild != null) {
        Node newNode = null;
        newNode = insert(node.leftChild, rect);
        if (newNode == null)
            newNode = insert(node.rightChild, rect);
        return newNode;
    } else {
        if (node.leaveName != null)
            return null;
        if (node.rect.width == rect.width && node.rect.height == rect.height)
            return node;
        if (node.rect.width < rect.width || node.rect.height < rect.height)
            return null;
        node.leftChild = new Node();
        node.rightChild = new Node();
        int deltaWidth = node.rect.width - rect.width;
        int deltaHeight = node.rect.height - rect.height;
        if (deltaWidth > deltaHeight) {
            node.leftChild.rect.x = node.rect.x;
            node.leftChild.rect.y = node.rect.y;
            node.leftChild.rect.width = rect.width;
            node.leftChild.rect.height = node.rect.height;
            node.rightChild.rect.x = node.rect.x + rect.width;
            node.rightChild.rect.y = node.rect.y;
            node.rightChild.rect.width = node.rect.width - rect.width;
            node.rightChild.rect.height = node.rect.height;
        } else {
            node.leftChild.rect.x = node.rect.x;
            node.leftChild.rect.y = node.rect.y;
            node.leftChild.rect.width = node.rect.width;
            node.leftChild.rect.height = rect.height;
            node.rightChild.rect.x = node.rect.x;
            node.rightChild.rect.y = node.rect.y + rect.height;
            node.rightChild.rect.width = node.rect.width;
            node.rightChild.rect.height = node.rect.height - rect.height;
        }
        return insert(node.leftChild, rect);
    }
}
