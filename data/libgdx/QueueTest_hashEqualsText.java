@Test
public void hashEqualsText() {
    Queue<Integer> q1 = new Queue<Integer>();
    Queue<Integer> q2 = new Queue<Integer>();
    assertEqualsAndHash(q1, q2);
    q1.addFirst(1);
    assertNotEquals(q1, q2);
    q2.addFirst(1);
    assertEqualsAndHash(q1, q2);
    q1.clear();
    q1.addLast(1);
    q1.addLast(2);
    q2.addLast(2);
    assertEqualsAndHash(q1, q2);
    for (int i = 0; i < 100; i++) {
        q1.addLast(i);
        q1.addLast(i);
        q1.removeFirst();
        assertNotEquals(q1, q2);
        q2.addLast(i);
        q2.addLast(i);
        q2.removeFirst();
        assertEqualsAndHash(q1, q2);
    }
}
