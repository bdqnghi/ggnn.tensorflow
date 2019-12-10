public static Array<Dummy> createDummies(int n) {
    float variance = 20;
    Array<Dummy> dummies = new Array<Dummy>();
    for (int i = 0; i < n; i++) {
        Dummy d = new Dummy();
        dummies.add(d);
        d.pos = new Vector2();
        d.id = nextID++;
    }
    return dummies;
}
