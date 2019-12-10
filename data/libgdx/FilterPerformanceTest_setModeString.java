void setModeString() {
    modeString = (mode % 2 == 0 ? "Sprite" : "Atlas") + " " + filterNames[mode / 2];
}
