public static void allRandom() {
    for (Dummy d : player) {
        d.setRandomPos();
    }
    for (Dummy d : enemy) {
        d.setRandomPos();
    }
}
