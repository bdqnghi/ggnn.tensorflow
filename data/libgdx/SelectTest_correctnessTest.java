public static void correctnessTest(int runs, int k) {
    String msg = String.format("[%d runs with %dx%d dummy game units] - ", runs, player.size, enemy.size);
    verify = true;
    test(runs, k);
    print(msg + "VERIFIED");
}
