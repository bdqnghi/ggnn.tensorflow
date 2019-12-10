public static int countMatches(String input, char match) {
    int count = 0;
    for (int i = 0; i < input.length(); i++) {
        if (input.charAt(i) == match) {
            count++;
        }
    }
    return count;
}
