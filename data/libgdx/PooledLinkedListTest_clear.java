@Test
public void clear() {
    list.clear();
    assertEquals(0, list.size());
    list.iter();
    assertNull(list.next());
}
