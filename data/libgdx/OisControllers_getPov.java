public PovDirection getPov(int povIndex) {
    OisPov pov = joystick.getPov(povIndex);
    switch(pov) {
        case Centered:
            return PovDirection.center;
        case East:
            return PovDirection.east;
        case North:
            return PovDirection.north;
        case NorthEast:
            return PovDirection.northEast;
        case NorthWest:
            return PovDirection.northWest;
        case South:
            return PovDirection.south;
        case SouthEast:
            return PovDirection.southEast;
        case SouthWest:
            return PovDirection.southWest;
        case West:
            return PovDirection.west;
    }
    // Impossible.
    return null;
}
