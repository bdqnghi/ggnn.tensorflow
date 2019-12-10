public void SetType(int numHashBytes) {
    HASH_ARRAY = (numHashBytes > 2);
    if (HASH_ARRAY) {
        kNumHashDirectBytes = 0;
        kMinMatchCheck = 4;
        kFixHashSize = kHash2Size + kHash3Size;
    } else {
        kNumHashDirectBytes = 2;
        kMinMatchCheck = 2 + 1;
        kFixHashSize = 0;
    }
}
