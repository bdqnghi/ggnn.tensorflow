private void endRow() {
    Array<Cell> cells = this.cells;
    int rowColumns = 0;
    for (int i = cells.size - 1; i >= 0; i--) {
        Cell cell = cells.get(i);
        if (cell.endRow)
            break;
        rowColumns += cell.colspan;
    }
    columns = Math.max(columns, rowColumns);
    rows++;
    cells.peek().endRow = true;
}
