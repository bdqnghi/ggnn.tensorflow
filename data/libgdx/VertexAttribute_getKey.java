/**
 * @return A unique number specifying the usage index (3 MSB) and unit (1 LSB).
 */
public int getKey() {
    return (usageIndex << 8) + (unit & 0xFF);
}
