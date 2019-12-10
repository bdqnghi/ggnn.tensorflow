public final Int32Array toJsArray(int[] values) {
    Int32Array array = TypedArrays.createInt32Array(values.length);
    array.set(values);
    return array;
}
