public Icon getPressedIcon() {
    // checkbox is missing 'pressed selected' icon, this allows us to add it
    if (isSelected())
        return iconPressedSelected;
    else
        return super.getPressedIcon();
}
