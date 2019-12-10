private Cell obtainCell() {
    Cell cell = cellPool.obtain();
    cell.setLayout(this);
    return cell;
}
