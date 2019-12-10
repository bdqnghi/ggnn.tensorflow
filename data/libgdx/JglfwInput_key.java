public void key(long window, int key, int action) {
    switch(action) {
        case GLFW_PRESS:
            key = getGdxKeyCode(key);
            processor.keyDown(key);
            lastCharacter = 0;
            char character = characterForKeyCode(key);
            if (character != 0)
                character(window, character);
            break;
        case GLFW_RELEASE:
            processor.keyUp(getGdxKeyCode(key));
            break;
        case GLFW_REPEAT:
            if (lastCharacter != 0)
                processor.keyTyped(lastCharacter);
            break;
    }
}
