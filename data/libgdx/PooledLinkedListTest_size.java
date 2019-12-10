@Test
public void size() {
    assertEquals(3, list.size());
    list.iter();
    list.next();
    list.remove();
    assertEquals(2, list.size());
}
