/**
 * Gets the cell values that will be used as the defaults for all cells in the specified column. Columns are indexed starting
 * at 0.
 */
public Cell columnDefaults(int column) {
    Cell cell = columnDefaults.size > column ? columnDefaults.get(column) : null;
    if (cell == null) {
        cell = obtainCell();
        cell.clear();
        if (column >= columnDefaults.size) {
            for (int i = columnDefaults.size; i < column; i++) columnDefaults.add(null);
            columnDefaults.add(cell);
        } else
            columnDefaults.set(column, cell);
    }
    return cell;
}
