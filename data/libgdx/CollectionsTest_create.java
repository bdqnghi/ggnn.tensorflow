public void create() {
    testMap(ArrayMap.class, values, valuesWithNulls);
    testMap(IdentityMap.class, values, valuesWithNulls);
    testMap(IntFloatMap.class, intValues, floatValues);
    testMap(IntIntMap.class, intValues, intValues);
    testMap(IntMap.class, intValues, valuesWithNulls);
    testMap(LongMap.class, longValues, valuesWithNulls);
    testMap(ObjectFloatMap.class, values, floatValues);
    testMap(ObjectIntMap.class, values, intValues);
    testMap(ObjectMap.class, values, valuesWithNulls);
    testMap(OrderedMap.class, values, valuesWithNulls);
    testArray(Array.class, valuesWithNulls);
    testArray(BooleanArray.class, new Boolean[] { true, false });
    testArray(ByteArray.class, byteValues);
    testArray(CharArray.class, charValues);
    testArray(FloatArray.class, floatValues);
    testArray(IntArray.class, intValues);
    testArray(LongArray.class, longValues);
    testArray(ShortArray.class, shortValues);
    testArray(SnapshotArray.class, values);
    testSet(IntSet.class, intValues);
    testSet(ObjectSet.class, values);
    testSet(OrderedSet.class, values);
    System.out.println("Success!");
}
