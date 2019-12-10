private void testArray(Class<?> arrayClass, Object[] values) {
    System.out.println(arrayClass);
    Object array = newInstance(arrayClass);
    for (int i = 0; i < values.length; i++) invoke("add", array, values[i]);
    Object otherArray = newInstance(arrayClass);
    for (int i = 0; i < values.length; i++) invoke("add", otherArray, values[i]);
    assertEquals(array, otherArray);
    Object unorderedArray = newInstance(arrayClass);
    set("ordered", unorderedArray, false);
    Object otherUnorderedArray = newInstance(arrayClass);
    set("ordered", otherUnorderedArray, false);
    assertEquals(unorderedArray, unorderedArray);
    assertNotEquals(unorderedArray, otherUnorderedArray);
}
