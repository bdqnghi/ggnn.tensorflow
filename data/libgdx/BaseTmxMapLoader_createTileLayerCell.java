protected Cell createTileLayerCell(boolean flipHorizontally, boolean flipVertically, boolean flipDiagonally) {
    Cell cell = new Cell();
    if (flipDiagonally) {
        if (flipHorizontally && flipVertically) {
            cell.setFlipHorizontally(true);
            cell.setRotation(Cell.ROTATE_270);
        } else if (flipHorizontally) {
            cell.setRotation(Cell.ROTATE_270);
        } else if (flipVertically) {
            cell.setRotation(Cell.ROTATE_90);
        } else {
            cell.setFlipVertically(true);
            cell.setRotation(Cell.ROTATE_270);
        }
    } else {
        cell.setFlipHorizontally(flipHorizontally);
        cell.setFlipVertically(flipVertically);
    }
    return cell;
}
