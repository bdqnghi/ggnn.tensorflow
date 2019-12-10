void add(String key, String codeBlock) {
    KeyedCodeBlock b = new KeyedCodeBlock();
    b.key = key;
    b.codeBlock = codeBlock;
    List<KeyedCodeBlock> blockList = blocks.get(key);
    if (blockList == null) {
        blockList = new ArrayList<KeyedCodeBlock>();
        blocks.put(key, blockList);
    }
    blockList.add(b);
}
