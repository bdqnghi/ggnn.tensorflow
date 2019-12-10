public Page pack(PixmapPacker packer, String name, Rectangle rect) {
    int padding = packer.padding;
    int pageWidth = packer.pageWidth - padding * 2, pageHeight = packer.pageHeight - padding * 2;
    int rectWidth = (int) rect.width + padding, rectHeight = (int) rect.height + padding;
    for (int i = 0, n = packer.pages.size; i < n; i++) {
        SkylinePage page = (SkylinePage) packer.pages.get(i);
        Row bestRow = null;
        // Fit in any row before the last.
        for (int ii = 0, nn = page.rows.size - 1; ii < nn; ii++) {
            Row row = page.rows.get(ii);
            if (row.x + rectWidth >= pageWidth)
                continue;
            if (row.y + rectHeight >= pageHeight)
                continue;
            if (rectHeight > row.height)
                continue;
            if (bestRow == null || row.height < bestRow.height)
                bestRow = row;
        }
        if (bestRow == null) {
            // Fit in last row, increasing height.
            Row row = page.rows.peek();
            if (row.y + rectHeight >= pageHeight)
                continue;
            if (row.x + rectWidth < pageWidth) {
                row.height = Math.max(row.height, rectHeight);
                bestRow = row;
            } else {
                // Fit in new row.
                bestRow = new Row();
                bestRow.y = row.y + row.height;
                bestRow.height = rectHeight;
                page.rows.add(bestRow);
            }
        }
        if (bestRow != null) {
            rect.x = bestRow.x;
            rect.y = bestRow.y;
            bestRow.x += rectWidth;
            return page;
        }
    }
    // Fit in new page.
    SkylinePage page = new SkylinePage(packer);
    packer.pages.add(page);
    Row row = new Row();
    row.x = padding + rectWidth;
    row.y = padding;
    row.height = rectHeight;
    page.rows.add(row);
    rect.x = padding;
    rect.y = padding;
    return page;
}
