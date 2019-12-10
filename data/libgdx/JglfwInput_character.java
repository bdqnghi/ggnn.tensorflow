public void character(long window, char character) {
    if ((character & 0xff00) == 0xf700)
        return;
    lastCharacter = character;
    processor.keyTyped(character);
}
