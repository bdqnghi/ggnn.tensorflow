private Page packPage(Array<Rect> inputRects) {
    int paddingX = settings.paddingX, paddingY = settings.paddingY;
    float maxWidth = settings.maxWidth, maxHeight = settings.maxHeight;
    int edgePaddingX = 0, edgePaddingY = 0;
    if (settings.edgePadding) {
        if (settings.duplicatePadding) {
            // If duplicatePadding, edges get only half padding.
            maxWidth -= paddingX;
            maxHeight -= paddingY;
        } else {
            maxWidth -= paddingX * 2;
            maxHeight -= paddingY * 2;
            edgePaddingX = paddingX;
            edgePaddingY = paddingY;
        }
    }
    // Find min size.
    int minWidth = Integer.MAX_VALUE, minHeight = Integer.MAX_VALUE;
    for (int i = 0, nn = inputRects.size; i < nn; i++) {
        Rect rect = inputRects.get(i);
        minWidth = Math.min(minWidth, rect.width);
        minHeight = Math.min(minHeight, rect.height);
        float width = rect.width - paddingX, height = rect.height - paddingY;
        if (settings.rotation) {
            if ((width > maxWidth || height > maxHeight) && (width > maxHeight || height > maxWidth)) {
                String paddingMessage = (edgePaddingX > 0 || edgePaddingY > 0) ? (" and edge padding " + paddingX + "," + paddingY) : "";
                throw new RuntimeException("Image does not fit with max page size " + settings.maxWidth + "x" + settings.maxHeight + paddingMessage + ": " + rect.name + "[" + width + "," + height + "]");
            }
        } else {
            if (width > maxWidth) {
                String paddingMessage = edgePaddingX > 0 ? (" and X edge padding " + paddingX) : "";
                throw new RuntimeException("Image does not fit with max page width " + settings.maxWidth + paddingMessage + ": " + rect.name + "[" + width + "," + height + "]");
            }
            if (height > maxHeight && (!settings.rotation || width > maxHeight)) {
                String paddingMessage = edgePaddingY > 0 ? (" and Y edge padding " + paddingY) : "";
                throw new RuntimeException("Image does not fit in max page height " + settings.maxHeight + paddingMessage + ": " + rect.name + "[" + width + "," + height + "]");
            }
        }
    }
    minWidth = Math.max(minWidth, settings.minWidth);
    minHeight = Math.max(minHeight, settings.minHeight);
    if (!settings.silent)
        System.out.print("Packing");
    // Find the minimal page size that fits all rects.
    Page bestResult = null;
    if (settings.square) {
        int minSize = Math.max(minWidth, minHeight);
        int maxSize = Math.min(settings.maxWidth, settings.maxHeight);
        BinarySearch sizeSearch = new BinarySearch(minSize, maxSize, settings.fast ? 25 : 15, settings.pot);
        int size = sizeSearch.reset(), i = 0;
        while (size != -1) {
            Page result = packAtSize(true, size - edgePaddingX, size - edgePaddingY, inputRects);
            if (!settings.silent) {
                if (++i % 70 == 0)
                    System.out.println();
                System.out.print(".");
            }
            bestResult = getBest(bestResult, result);
            size = sizeSearch.next(result == null);
        }
        if (!settings.silent)
            System.out.println();
        // Rects don't fit on one page. Fill a whole page and return.
        if (bestResult == null)
            bestResult = packAtSize(false, maxSize - edgePaddingX, maxSize - edgePaddingY, inputRects);
        sort.sort(bestResult.outputRects, rectComparator);
        bestResult.width = Math.max(bestResult.width, bestResult.height);
        bestResult.height = Math.max(bestResult.width, bestResult.height);
        return bestResult;
    } else {
        BinarySearch widthSearch = new BinarySearch(minWidth, settings.maxWidth, settings.fast ? 25 : 15, settings.pot);
        BinarySearch heightSearch = new BinarySearch(minHeight, settings.maxHeight, settings.fast ? 25 : 15, settings.pot);
        int width = widthSearch.reset(), i = 0;
        int height = settings.square ? width : heightSearch.reset();
        while (true) {
            Page bestWidthResult = null;
            while (width != -1) {
                Page result = packAtSize(true, width - edgePaddingX, height - edgePaddingY, inputRects);
                if (!settings.silent) {
                    if (++i % 70 == 0)
                        System.out.println();
                    System.out.print(".");
                }
                bestWidthResult = getBest(bestWidthResult, result);
                width = widthSearch.next(result == null);
                if (settings.square)
                    height = width;
            }
            bestResult = getBest(bestResult, bestWidthResult);
            if (settings.square)
                break;
            height = heightSearch.next(bestWidthResult == null);
            if (height == -1)
                break;
            width = widthSearch.reset();
        }
        if (!settings.silent)
            System.out.println();
        // Rects don't fit on one page. Fill a whole page and return.
        if (bestResult == null)
            bestResult = packAtSize(false, settings.maxWidth - edgePaddingX, settings.maxHeight - edgePaddingY, inputRects);
        sort.sort(bestResult.outputRects, rectComparator);
        return bestResult;
    }
}
