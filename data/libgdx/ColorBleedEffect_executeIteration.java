private void executeIteration(int[] rgb, Mask mask, int width, int height) {
    MaskIterator iterator = mask.new MaskIterator();
    while (iterator.hasNext()) {
        int pixelIndex = iterator.next();
        int x = pixelIndex % width;
        int y = pixelIndex / width;
        int r = 0, g = 0, b = 0;
        int count = 0;
        for (int i = 0, n = offsets.length; i < n; i++) {
            int[] offset = offsets[i];
            int column = x + offset[0];
            int row = y + offset[1];
            if (column < 0 || column >= width || row < 0 || row >= height)
                continue;
            int currentPixelIndex = getPixelIndex(width, column, row);
            if (mask.getMask(currentPixelIndex) == REALDATA) {
                color.argb = rgb[currentPixelIndex];
                r += color.red();
                g += color.green();
                b += color.blue();
                count++;
            }
        }
        if (count != 0) {
            color.setARGBA(0, r / count, g / count, b / count);
            rgb[pixelIndex] = color.argb;
            iterator.markAsInProgress();
        }
    }
    iterator.reset();
}
