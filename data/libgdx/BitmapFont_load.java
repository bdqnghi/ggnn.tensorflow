public void load(FileHandle fontFile, boolean flip) {
    if (imagePaths != null)
        throw new IllegalStateException("Already loaded.");
    BufferedReader reader = new BufferedReader(new InputStreamReader(fontFile.read()), 512);
    try {
        // info
        String line = reader.readLine();
        if (line == null)
            throw new GdxRuntimeException("File is empty.");
        line = line.substring(line.indexOf("padding=") + 8);
        String[] padding = line.substring(0, line.indexOf(' ')).split(",", 4);
        if (padding.length != 4)
            throw new GdxRuntimeException("Invalid padding.");
        padTop = Integer.parseInt(padding[0]);
        padLeft = Integer.parseInt(padding[1]);
        padBottom = Integer.parseInt(padding[2]);
        padRight = Integer.parseInt(padding[3]);
        float padY = padTop + padBottom;
        line = reader.readLine();
        if (line == null)
            throw new GdxRuntimeException("Missing common header.");
        // At most we want the 6th element; i.e. "page=N"
        String[] common = line.split(" ", 7);
        // At least lineHeight and base are required.
        if (common.length < 3)
            throw new GdxRuntimeException("Invalid common header.");
        if (!common[1].startsWith("lineHeight="))
            throw new GdxRuntimeException("Missing: lineHeight");
        lineHeight = Integer.parseInt(common[1].substring(11));
        if (!common[2].startsWith("base="))
            throw new GdxRuntimeException("Missing: base");
        float baseLine = Integer.parseInt(common[2].substring(5));
        int pageCount = 1;
        if (common.length >= 6 && common[5] != null && common[5].startsWith("pages=")) {
            try {
                pageCount = Math.max(1, Integer.parseInt(common[5].substring(6)));
            } catch (NumberFormatException ignored) {
            // Use one page.
            }
        }
        imagePaths = new String[pageCount];
        // Read each page definition.
        for (int p = 0; p < pageCount; p++) {
            // Read each "page" info line.
            line = reader.readLine();
            if (line == null)
                throw new GdxRuntimeException("Missing additional page definitions.");
            String[] pageLine = line.split(" ", 4);
            if (!pageLine[2].startsWith("file="))
                throw new GdxRuntimeException("Missing: file");
            // Expect ID to mean "index".
            if (pageLine[1].startsWith("id=")) {
                try {
                    int pageID = Integer.parseInt(pageLine[1].substring(3));
                    if (pageID != p)
                        throw new GdxRuntimeException("Page IDs must be indices starting at 0: " + pageLine[1].substring(3));
                } catch (NumberFormatException ex) {
                    throw new GdxRuntimeException("Invalid page id: " + pageLine[1].substring(3), ex);
                }
            }
            String fileName = null;
            if (pageLine[2].endsWith("\"")) {
                fileName = pageLine[2].substring(6, pageLine[2].length() - 1);
            } else {
                fileName = pageLine[2].substring(5, pageLine[2].length());
            }
            imagePaths[p] = fontFile.parent().child(fileName).path().replaceAll("\\\\", "/");
        }
        descent = 0;
        while (true) {
            line = reader.readLine();
            // EOF
            if (line == null)
                break;
            // Starting kernings block.
            if (line.startsWith("kernings "))
                break;
            if (!line.startsWith("char "))
                continue;
            Glyph glyph = new Glyph();
            StringTokenizer tokens = new StringTokenizer(line, " =");
            tokens.nextToken();
            tokens.nextToken();
            int ch = Integer.parseInt(tokens.nextToken());
            if (ch <= 0)
                missingGlyph = glyph;
            else if (ch <= Character.MAX_VALUE)
                setGlyph(ch, glyph);
            else
                continue;
            glyph.id = ch;
            tokens.nextToken();
            glyph.srcX = Integer.parseInt(tokens.nextToken());
            tokens.nextToken();
            glyph.srcY = Integer.parseInt(tokens.nextToken());
            tokens.nextToken();
            glyph.width = Integer.parseInt(tokens.nextToken());
            tokens.nextToken();
            glyph.height = Integer.parseInt(tokens.nextToken());
            tokens.nextToken();
            glyph.xoffset = Integer.parseInt(tokens.nextToken());
            tokens.nextToken();
            if (flip)
                glyph.yoffset = Integer.parseInt(tokens.nextToken());
            else
                glyph.yoffset = -(glyph.height + Integer.parseInt(tokens.nextToken()));
            tokens.nextToken();
            glyph.xadvance = Integer.parseInt(tokens.nextToken());
            // Check for page safely, it could be omitted or invalid.
            if (tokens.hasMoreTokens())
                tokens.nextToken();
            if (tokens.hasMoreTokens()) {
                try {
                    glyph.page = Integer.parseInt(tokens.nextToken());
                } catch (NumberFormatException ignored) {
                }
            }
            if (glyph.width > 0 && glyph.height > 0)
                descent = Math.min(baseLine + glyph.yoffset, descent);
        }
        descent += padBottom;
        while (true) {
            line = reader.readLine();
            if (line == null)
                break;
            if (!line.startsWith("kerning "))
                break;
            StringTokenizer tokens = new StringTokenizer(line, " =");
            tokens.nextToken();
            tokens.nextToken();
            int first = Integer.parseInt(tokens.nextToken());
            tokens.nextToken();
            int second = Integer.parseInt(tokens.nextToken());
            if (first < 0 || first > Character.MAX_VALUE || second < 0 || second > Character.MAX_VALUE)
                continue;
            Glyph glyph = getGlyph((char) first);
            tokens.nextToken();
            int amount = Integer.parseInt(tokens.nextToken());
            if (glyph != null) {
                // Kernings may exist for glyph pairs not contained in the font.
                glyph.setKerning(second, amount);
            }
        }
        Glyph spaceGlyph = getGlyph(' ');
        if (spaceGlyph == null) {
            spaceGlyph = new Glyph();
            spaceGlyph.id = (int) ' ';
            Glyph xadvanceGlyph = getGlyph('l');
            if (xadvanceGlyph == null)
                xadvanceGlyph = getFirstGlyph();
            spaceGlyph.xadvance = xadvanceGlyph.xadvance;
            setGlyph(' ', spaceGlyph);
        }
        if (spaceGlyph.width == 0) {
            spaceGlyph.width = (int) (padLeft + spaceGlyph.xadvance + padRight);
            spaceGlyph.xoffset = (int) -padLeft;
        }
        spaceWidth = spaceGlyph.width;
        Glyph xGlyph = null;
        for (char xChar : xChars) {
            xGlyph = getGlyph(xChar);
            if (xGlyph != null)
                break;
        }
        if (xGlyph == null)
            xGlyph = getFirstGlyph();
        xHeight = xGlyph.height - padY;
        Glyph capGlyph = null;
        for (char capChar : capChars) {
            capGlyph = getGlyph(capChar);
            if (capGlyph != null)
                break;
        }
        if (capGlyph == null) {
            for (Glyph[] page : this.glyphs) {
                if (page == null)
                    continue;
                for (Glyph glyph : page) {
                    if (glyph == null || glyph.height == 0 || glyph.width == 0)
                        continue;
                    capHeight = Math.max(capHeight, glyph.height);
                }
            }
        } else
            capHeight = capGlyph.height;
        capHeight -= padY;
        ascent = baseLine - capHeight;
        down = -lineHeight;
        if (flip) {
            ascent = -ascent;
            down = -down;
        }
    } catch (Exception ex) {
        throw new GdxRuntimeException("Error loading font file: " + fontFile, ex);
    } finally {
        StreamUtils.closeQuietly(reader);
    }
}
