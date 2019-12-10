public boolean isPrimitiveArray() {
    return toString().endsWith("Array") && this != ObjectArray;
}
