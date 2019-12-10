/**
 * @param color The default color to use for the text (the BitmapFont {@link BitmapFont#getColor() color} is not used). If
 *           {@link BitmapFontData#markupEnabled} is true, color markup tags in the specified string may change the color for
 *           portions of the text.
 * @param halign Horizontal alignment of the text, see {@link Align}.
 * @param targetWidth The width used for alignment, line wrapping, and truncation. May be zero if those features are not used.
 * @param truncate If not null and the width of the glyphs exceed targetWidth, the glyphs are truncated and the glyphs for the
 *           specified truncate string are placed at the end. Empty string can be used to truncate without adding glyphs.
 *           Truncate should not be used with text that contains multiple lines. Wrap is ignored if truncate is not null.
 */
public void setText(BitmapFont font, CharSequence str, int start, int end, Color color, float targetWidth, int halign, boolean wrap, String truncate) {
    if (truncate != null)
        // Causes truncate code to run, doesn't actually cause wrapping.
        wrap = true;
    else if (// 
    targetWidth <= font.data.spaceWidth)
        // Avoid one line per character, which is very inefficient.
        wrap = false;
    BitmapFontData fontData = font.data;
    boolean markupEnabled = fontData.markupEnabled;
    Pool<GlyphRun> glyphRunPool = Pools.get(GlyphRun.class);
    Array<GlyphRun> runs = this.runs;
    glyphRunPool.freeAll(runs);
    runs.clear();
    float x = 0, y = 0, width = 0;
    int lines = 0;
    Array<Color> colorStack = this.colorStack;
    Color nextColor = color;
    colorStack.add(color);
    Pool<Color> colorPool = Pools.get(Color.class);
    int runStart = start;
    outer: while (true) {
        // Each run is delimited by newline or left square bracket.
        int runEnd = -1;
        boolean newline = false, colorRun = false;
        if (start == end) {
            // End of string with no run to process, we're done.
            if (runStart == end)
                break;
            // End of string, process last run.
            runEnd = end;
        } else {
            switch(str.charAt(start++)) {
                case '\n':
                    // End of line.
                    runEnd = start - 1;
                    newline = true;
                    break;
                case '[':
                    // Possible color tag.
                    if (markupEnabled) {
                        int length = parseColorMarkup(str, start, end, colorPool);
                        if (length >= 0) {
                            runEnd = start - 1;
                            start += length + 1;
                            nextColor = colorStack.peek();
                            colorRun = true;
                        }
                    }
                    break;
            }
        }
        if (runEnd != -1) {
            if (runEnd != runStart) {
                // Can happen (eg) when a color tag is at text start.
                // Store the run that has ended.
                GlyphRun run = glyphRunPool.obtain();
                run.color.set(color);
                run.x = x;
                run.y = y;
                fontData.getGlyphs(run, str, runStart, runEnd, colorRun);
                if (run.glyphs.size == 0)
                    glyphRunPool.free(run);
                else {
                    runs.add(run);
                    // Compute the run width, wrap if necessary, and position the run.
                    float[] xAdvances = run.xAdvances.items;
                    for (int i = 0, n = run.xAdvances.size; i < n; i++) {
                        float xAdvance = xAdvances[i];
                        x += xAdvance;
                        // Don't wrap if the glyph would fit with just its width (no xadvance or kerning).
                        if (wrap && x > targetWidth && i > 1 && x - xAdvance + (run.glyphs.get(i - 1).xoffset + run.glyphs.get(i - 1).width) * fontData.scaleX - 0.0001f > targetWidth) {
                            if (truncate != null) {
                                truncate(fontData, run, targetWidth, truncate, i, glyphRunPool);
                                x = run.x + run.width;
                                break outer;
                            }
                            int wrapIndex = fontData.getWrapIndex(run.glyphs, i);
                            if (// Require at least one glyph per line.
                            (run.x == 0 && wrapIndex == 0) || wrapIndex >= run.glyphs.size) {
                                // Wrap at least the glyph that didn't fit.
                                wrapIndex = i - 1;
                            }
                            GlyphRun next = wrap(fontData, run, glyphRunPool, wrapIndex, i);
                            runs.add(next);
                            // Start the loop over with the new run on the next line.
                            width = Math.max(width, run.x + run.width);
                            x = 0;
                            y += fontData.down;
                            lines++;
                            next.x = 0;
                            next.y = y;
                            i = -1;
                            n = next.xAdvances.size;
                            xAdvances = next.xAdvances.items;
                            run = next;
                        } else
                            run.width += xAdvance;
                    }
                }
            }
            if (newline) {
                // Next run will be on the next line.
                width = Math.max(width, x);
                x = 0;
                y += fontData.down;
                lines++;
            }
            runStart = start;
            color = nextColor;
        }
    }
    width = Math.max(width, x);
    for (int i = 1, n = colorStack.size; i < n; i++) colorPool.free(colorStack.get(i));
    colorStack.clear();
    // Align runs to center or right of targetWidth.
    if ((halign & Align.left) == 0) {
        // Not left aligned, so must be center or right aligned.
        boolean center = (halign & Align.center) != 0;
        float lineWidth = 0, lineY = Integer.MIN_VALUE;
        int lineStart = 0, n = runs.size;
        for (int i = 0; i < n; i++) {
            GlyphRun run = runs.get(i);
            if (run.y != lineY) {
                lineY = run.y;
                float shift = targetWidth - lineWidth;
                if (center)
                    shift /= 2;
                while (lineStart < i) runs.get(lineStart++).x += shift;
                lineWidth = 0;
            }
            lineWidth += run.width;
        }
        float shift = targetWidth - lineWidth;
        if (center)
            shift /= 2;
        while (lineStart < n) runs.get(lineStart++).x += shift;
    }
    this.width = width;
    this.height = fontData.capHeight + lines * fontData.lineHeight;
}
