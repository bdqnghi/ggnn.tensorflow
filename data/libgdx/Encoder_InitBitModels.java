public static void InitBitModels(short[] probs) {
    for (int i = 0; i < probs.length; i++) probs[i] = (kBitModelTotal >>> 1);
}
