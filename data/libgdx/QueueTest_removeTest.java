@Test
public void removeTest() {
    final Queue<Integer> q = new Queue<Integer>();
    // Test head < tail.
    for (int j = 0; j <= 6; j++) q.addLast(j);
    assertValues(q, 0, 1, 2, 3, 4, 5, 6);
    q.removeIndex(0);
    assertValues(q, 1, 2, 3, 4, 5, 6);
    q.removeIndex(1);
    assertValues(q, 1, 3, 4, 5, 6);
    q.removeIndex(4);
    assertValues(q, 1, 3, 4, 5);
    q.removeIndex(2);
    assertValues(q, 1, 3, 5);
    // Test head >= tail and index >= head.
    q.clear();
    for (int j = 2; j >= 0; j--) q.addFirst(j);
    for (int j = 3; j <= 6; j++) q.addLast(j);
    assertValues(q, 0, 1, 2, 3, 4, 5, 6);
    q.removeIndex(1);
    assertValues(q, 0, 2, 3, 4, 5, 6);
    q.removeIndex(0);
    assertValues(q, 2, 3, 4, 5, 6);
    // Test head >= tail and index < tail.
    q.clear();
    for (int j = 2; j >= 0; j--) q.addFirst(j);
    for (int j = 3; j <= 6; j++) q.addLast(j);
    assertValues(q, 0, 1, 2, 3, 4, 5, 6);
    q.removeIndex(5);
    assertValues(q, 0, 1, 2, 3, 4, 6);
    q.removeIndex(5);
    assertValues(q, 0, 1, 2, 3, 4);
}
