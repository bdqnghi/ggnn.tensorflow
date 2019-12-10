@Test
public void remove() {
    list.iter();
    // 1
    list.next();
    list.remove();
    // 2
    list.next();
    // 3
    list.next();
    list.remove();
    list.iter();
    assertEquals(Integer.valueOf(2), list.next());
    assertNull(list.next());
}
