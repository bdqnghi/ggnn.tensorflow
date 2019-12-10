static private boolean legalAtEnd(int ch) {
    switch(ch) {
        case '$':
        case '(':
        case '*':
        case ',':
        case '£':
        case '¥':
        case '·':
        case '‘':
        case '“':
        case '〈':
        case '《':
        case '「':
        case '『':
        case '【':
        case '〔':
        case '〖':
        case '〝':
        case '﹗':
        case '﹙':
        case '﹛':
        case '＄':
        case '（':
        case '．':
        case '［':
        case '｛':
        case '￡':
        case '￥':
            return false;
    }
    return true;
}
