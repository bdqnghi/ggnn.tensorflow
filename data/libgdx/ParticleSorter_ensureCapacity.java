@Override
public void ensureCapacity(int capacity) {
    if (currentSize < capacity) {
        distances = new float[capacity];
        particleIndices = new int[capacity];
        particleOffsets = new int[capacity];
        currentSize = capacity;
    }
}
