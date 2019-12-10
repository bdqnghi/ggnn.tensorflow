private void testMap(Class<?> mapClass, Object[] keys, Object[] values) {
    System.out.println(mapClass);
    Object map = newInstance(mapClass);
    Object otherMap = newInstance(mapClass);
    assertEquals(map, map);
    for (int i = 0, n = keys.length; i < n; ++i) {
        Object anotherMap = copy(map);
        invoke("put", map, keys[i], values[i]);
        invoke("put", otherMap, keys[i], values[i]);
        assertEquals(map, otherMap);
        assertNotEquals(map, anotherMap);
        invoke("put", anotherMap, keys[(i + 1) % keys.length], values[i]);
        assertNotEquals(map, anotherMap);
    }
}
