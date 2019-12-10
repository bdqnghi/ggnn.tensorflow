@Test
public void reverseIteration() {
    list.iterReverse();
    assertEquals(Integer.valueOf(3), list.previous());
    assertEquals(Integer.valueOf(2), list.previous());
    assertEquals(Integer.valueOf(1), list.previous());
    assertNull(list.previous());
}
