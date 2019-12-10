public OisPov getPov(int povIndex) {
    if (povIndex < 0 || povIndex >= povs.length)
        return OisPov.Centered;
    switch(povs[povIndex]) {
        case 0x00000000:
            return OisPov.Centered;
        case 0x00000001:
            return OisPov.North;
        case 0x00000010:
            return OisPov.South;
        case 0x00000100:
            return OisPov.East;
        case 0x00001000:
            return OisPov.West;
        case 0x00000101:
            return OisPov.NorthEast;
        case 0x00000110:
            return OisPov.SouthEast;
        case 0x00001001:
            return OisPov.NorthWest;
        case 0x00001010:
            return OisPov.SouthWest;
        default:
            throw new RuntimeException("Unexpected POV value reported by OIS: " + povs[povIndex]);
    }
}
