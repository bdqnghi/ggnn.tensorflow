protected int letterUnderCursor(float x) {
    if (linesBreak.size > 0) {
        if (cursorLine * 2 >= linesBreak.size) {
            return text.length();
        } else {
            int start = linesBreak.items[cursorLine * 2];
            int end = linesBreak.items[cursorLine * 2 + 1];
            int i = start;
            boolean found = false;
            while (i <= end && !found) {
                if (glyphPositions.items[i] - glyphPositions.items[start] > x) {
                    found = true;
                } else {
                    i++;
                }
            }
            return Math.max(0, i - 1);
        }
    } else {
        return 0;
    }
}
