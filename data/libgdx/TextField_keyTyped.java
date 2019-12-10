public boolean keyTyped(InputEvent event, char character) {
    if (disabled)
        return false;
    // Disallow "typing" most ASCII control characters, which would show up as a space when onlyFontChars is true.
    switch(character) {
        case BACKSPACE:
        case TAB:
        case ENTER_ANDROID:
        case ENTER_DESKTOP:
            break;
        default:
            if (character < 32)
                return false;
    }
    Stage stage = getStage();
    if (stage == null || stage.getKeyboardFocus() != TextField.this)
        return false;
    if (UIUtils.isMac && Gdx.input.isKeyPressed(Keys.SYM))
        return true;
    if ((character == TAB || character == ENTER_ANDROID) && focusTraversal) {
        next(UIUtils.shift());
    } else {
        boolean delete = character == DELETE;
        boolean backspace = character == BACKSPACE;
        boolean enter = character == ENTER_DESKTOP || character == ENTER_ANDROID;
        boolean add = enter ? writeEnters : (!onlyFontChars || style.font.getData().hasGlyph(character));
        boolean remove = backspace || delete;
        if (add || remove) {
            String oldText = text;
            int oldCursor = cursor;
            if (hasSelection)
                cursor = delete(false);
            else {
                if (backspace && cursor > 0) {
                    text = text.substring(0, cursor - 1) + text.substring(cursor--);
                    renderOffset = 0;
                }
                if (delete && cursor < text.length()) {
                    text = text.substring(0, cursor) + text.substring(cursor + 1);
                }
            }
            if (add && !remove) {
                // Character may be added to the text.
                if (!enter && filter != null && !filter.acceptChar(TextField.this, character))
                    return true;
                if (!withinMaxLength(text.length()))
                    return true;
                String insertion = enter ? "\n" : String.valueOf(character);
                text = insert(cursor++, insertion, text);
            }
            if (!changeText(oldText, text))
                cursor = oldCursor;
            updateDisplayText();
        }
    }
    if (listener != null)
        listener.keyTyped(TextField.this, character);
    return true;
}
