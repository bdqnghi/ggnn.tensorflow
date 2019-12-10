@Test
public void iteration() {
    list.iter();
    assertEquals(Integer.valueOf(1), list.next());
    assertEquals(Integer.valueOf(2), list.next());
    assertEquals(Integer.valueOf(3), list.next());
    assertNull(list.next());
}
