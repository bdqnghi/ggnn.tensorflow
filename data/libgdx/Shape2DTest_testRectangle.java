@Test
public void testRectangle() {
    Rectangle r1 = new Rectangle(0, 0, 1, 1);
    Rectangle r2 = new Rectangle(1, 0, 2, 1);
    assertTrue(r1.overlaps(r1));
    assertFalse(r1.overlaps(r2));
    assertTrue(r1.contains(0, 0));
}
