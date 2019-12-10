private void down(int index) {
    Node[] nodes = this.nodes;
    int size = this.size;
    Node node = nodes[index];
    float value = node.value;
    while (true) {
        int leftIndex = 1 + (index << 1);
        if (leftIndex >= size)
            break;
        int rightIndex = leftIndex + 1;
        // Always have a left child.
        Node leftNode = nodes[leftIndex];
        float leftValue = leftNode.value;
        // May have a right child.
        Node rightNode;
        float rightValue;
        if (rightIndex >= size) {
            rightNode = null;
            rightValue = isMaxHeap ? Float.MIN_VALUE : Float.MAX_VALUE;
        } else {
            rightNode = nodes[rightIndex];
            rightValue = rightNode.value;
        }
        // The smallest of the three values is the parent.
        if (leftValue < rightValue ^ isMaxHeap) {
            if (leftValue == value || (leftValue > value ^ isMaxHeap))
                break;
            nodes[index] = leftNode;
            leftNode.index = index;
            index = leftIndex;
        } else {
            if (rightValue == value || (rightValue > value ^ isMaxHeap))
                break;
            nodes[index] = rightNode;
            rightNode.index = index;
            index = rightIndex;
        }
    }
    nodes[index] = node;
    node.index = index;
}
