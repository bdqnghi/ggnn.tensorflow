@Test
public void testXor() {
    Bits b1 = new Bits();
    Bits b2 = new Bits();
    b2.set(200);
    // b1:s array should grow to accommodate b2
    b1.xor(b2);
    assertTrue(b1.get(200));
    b1.set(1024);
    b2.xor(b1);
    assertTrue(b2.get(1024));
}
