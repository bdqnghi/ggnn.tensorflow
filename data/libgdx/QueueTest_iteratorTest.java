@Test
public void iteratorTest() {
    final Queue<Integer> q = new Queue<Integer>();
    // Test head < tail.
    for (int j = 0; j <= 6; j++) q.addLast(j);
    Iterator<Integer> iter = q.iterator();
    for (int j = 0; j <= 6; j++) assertEquals(iter.next().intValue(), j);
    iter = q.iterator();
    iter.next();
    iter.remove();
    assertValues(q, 1, 2, 3, 4, 5, 6);
    iter.next();
    iter.remove();
    assertValues(q, 2, 3, 4, 5, 6);
    iter.next();
    iter.next();
    iter.remove();
    assertValues(q, 2, 4, 5, 6);
    iter.next();
    iter.next();
    iter.next();
    iter.remove();
    assertValues(q, 2, 4, 5);
    // Test head >= tail.
    q.clear();
    for (int j = 2; j >= 0; j--) q.addFirst(j);
    for (int j = 3; j <= 6; j++) q.addLast(j);
    iter = q.iterator();
    for (int j = 0; j <= 6; j++) assertEquals(iter.next().intValue(), j);
    iter = q.iterator();
    iter.next();
    iter.remove();
    assertValues(q, 1, 2, 3, 4, 5, 6);
    iter.next();
    iter.remove();
    assertValues(q, 2, 3, 4, 5, 6);
    iter.next();
    iter.next();
    iter.remove();
    assertValues(q, 2, 4, 5, 6);
    iter.next();
    iter.next();
    iter.next();
    iter.remove();
    assertValues(q, 2, 4, 5);
}
