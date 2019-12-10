/**
 * @param fully If true, the only results that pack all rects will be considered. If false, all results are considered, not
 *           all rects may be packed.
 */
private Page packAtSize(boolean fully, int width, int height, Array<Rect> inputRects) {
    Page bestResult = null;
    for (int i = 0, n = methods.length; i < n; i++) {
        maxRects.init(width, height);
        Page result;
        if (!settings.fast) {
            result = maxRects.pack(inputRects, methods[i]);
        } else {
            Array<Rect> remaining = new Array();
            for (int ii = 0, nn = inputRects.size; ii < nn; ii++) {
                Rect rect = inputRects.get(ii);
                if (maxRects.insert(rect, methods[i]) == null) {
                    while (ii < nn) remaining.add(inputRects.get(ii++));
                }
            }
            result = maxRects.getResult();
            result.remainingRects = remaining;
        }
        if (fully && result.remainingRects.size > 0)
            continue;
        if (result.outputRects.size == 0)
            continue;
        bestResult = getBest(bestResult, result);
    }
    return bestResult;
}
