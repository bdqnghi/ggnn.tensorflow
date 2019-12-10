public boolean isPlainOldDataType() {
    return !isString() && !isPrimitiveArray() && !isBuffer() && !isObject();
}
