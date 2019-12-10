private void testSet(Class<?> setClass, Object[] values) {
    System.out.println(setClass);
    Object set = newInstance(setClass);
    for (int i = 0, n = values.length; i < n; ++i) invoke("add", set, values[i]);
    Object otherSet = newInstance(setClass);
    for (int i = 0, n = values.length; i < n; ++i) invoke("add", otherSet, values[i]);
    Object thirdSet = newInstance(setClass);
    for (int i = 0, n = values.length; i < n; i++) invoke("add", thirdSet, values[n - i - 1]);
    assertEquals(set, set);
    assertEquals(set, otherSet);
    assertEquals(set, thirdSet);
    assertEquals(otherSet, set);
    assertEquals(otherSet, otherSet);
    assertEquals(otherSet, thirdSet);
    assertEquals(thirdSet, set);
    assertEquals(thirdSet, otherSet);
    assertEquals(thirdSet, thirdSet);
}
