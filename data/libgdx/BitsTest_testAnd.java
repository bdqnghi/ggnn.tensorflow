@Test
public void testAnd() {
    Bits b1 = new Bits();
    Bits b2 = new Bits();
    b2.set(200);
    // b1 should cancel b2:s bit
    b2.and(b1);
    assertFalse(b2.get(200));
    b1.set(400);
    b1.and(b2);
    assertFalse(b1.get(400));
}
