private void assertValues(Queue<Integer> q, Integer... values) {
    for (int i = 0, n = values.length; i < n; i++) if (values[i] != q.get(i))
        fail(q + " != " + new Array(values));
}
